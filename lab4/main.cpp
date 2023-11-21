#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

string StrInput() {
	string temp;
	getline(cin, temp);
	return temp;
}

int CaseDialog() {
	char temp;
	cin >> temp;
	switch (temp)
	{
	case 'y':
		return 1;
	case 'n':
		return 0;
	default:
		return -1;
	}
}

int DialogYN() {
	setlocale(0, "rus");
	int res = CaseDialog();
	if ((res == 1) || (res == 0))
		return res;
	else {
		cout << "Неверное значение! Повторите попытку!" << endl;
		DialogYN();
	}

}


string Corrector(string In, string badwords) {
	setlocale(0, "rus");
	string in = In;
	if (in.find(badwords)!=string::npos) {
		cout << "Было найдено запретное слово:" << badwords << endl;
		cout << endl << endl << "Хотите заменить запретные слова, да или нет?";
		int dial = DialogYN();
		if (dial == 0) {
			cout << "Удалить запретные слова?";
			if (DialogYN() == 1)
				while (in.find  (badwords) != string::npos) {
					int pos = in.find(badwords);
					int leng = badwords.size();
					in.erase(pos, leng);
				}
			else
			{
			}
		}
		else
		{

			cout << "Введите слово на которое хотите заменить:";
			string temp;
			cin >> temp;
			//string temp1 = StrInput();
			while (in.find(badwords) != string::npos) {
				int pos = in.find(badwords);
				int leng = badwords.size();
				in.erase(pos, leng);
				in.insert(pos, temp);
			}
		}
	}
	else
		cout << "Слово не найдено." << endl << endl;
	return in;
}

string Bad(string str) {
	setlocale(0, "rus");
	cout << "Введите слово, которое хотите найти и скоректировать." << endl;
	string bad= StrInput();

	string temp =Corrector(str, bad);
	cout << temp;
	return temp;
}


int main() {
	setlocale(0, "rus");

	ifstream in;
	ofstream of;
	in.open("begin.txt");
	of.open("end.txt");
	if (in.fail() == 1) {
		cout << "Не удалось открыть входной файл." << endl;
		return 0;
	}
	else {
		cout << "Удалось открыть входной файл." << endl;

	}


	string str;
	getline(in, str);
	cout << "Исходная строка: " << endl<<str<<endl;
	of<<Bad(str);
	return 0;
}
