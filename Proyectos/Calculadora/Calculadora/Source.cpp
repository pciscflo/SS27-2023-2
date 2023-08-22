#include <iostream>
#include <conio.h>
#include "Header.h"
using namespace std;

int main() {
	Calculadora* calculadora = new Calculadora(2, 3);
	cout << calculadora->suma() << endl;
	calculadora->setA(4);
	calculadora->setB(6);
	cout << calculadora->suma() << endl;
	_getch();
	return 0;
}
