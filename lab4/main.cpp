#include <iostream>
#include <string>
#include <fstream>
#include "redactor.h"

using namespace std;

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
