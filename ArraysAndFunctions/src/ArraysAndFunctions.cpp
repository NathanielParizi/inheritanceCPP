//============================================================================
// Name        : ArraysAndFunctions.cpp
// Author      : Nathaniel-Joel Parizi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void show(string txt[], const int nElements) {

	for (int i = 0; i < nElements; i++) {
		cout << txt[i] << endl;
	}
}

void show2(string *txt, const int nElements) {
	for (int i = 0; i < nElements; i++) {
		cout << txt[i] << endl;
	}
}

void show3(string (&texts)[3]) {
	for (int i = 0; i < sizeof(texts) / sizeof(string); i++) {
		cout << texts[i] << endl;
	}
}

char *getMemory() {

	char *pMem = new char(100); //100 bits
	return pMem;

}

void freeMemory(char *pMem) {
	delete[] pMem;
}

int main() {

	string texts[] = { "apple", "orange", "banana" }; //initialized
	cout << sizeof(texts) << endl;

	show(texts, 3);
	cout << endl;

	show2(texts, 3);
	cout << endl;

	show3(texts);

	char *pMem = getMemory();
	freeMemory(pMem);

	return 0;

}
