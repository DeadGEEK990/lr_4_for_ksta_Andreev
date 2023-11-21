#include <iostream>
#include <string>
#include <fstream>
#include "redactor.h"

using namespace std;

/**
@mainpage Text editor
Tasks:
- a text file with some text is taken
- a word is entered that is subsequently found in the text
- enter the word to which you want to change the word entered earlier
- edited text is saved to another text file

\authors
Andreev
\version
1.1.0
*/

/**
    @file main.cpp
*/

/**
    @brief Main function
    @details
    open a text file containing the text, call functions
    that edit the text and save it in another text file.
*/


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
