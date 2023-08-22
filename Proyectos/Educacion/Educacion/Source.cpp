#include <iostream>
#include <conio.h>
#include "Header.h"
using namespace std;

int main() {
	Alumno* alumno1 = new Alumno("u20179485", "Pepe", 19, 20);
	Alumno* alumno2 = new Alumno("u20223049", "Ana", 17, 20);
	cout << "Promedio del alumno "<< alumno1->getNombre() << ":" << alumno1->calcularPromedio() << endl;
	cout << "Promedio del alumno " <<alumno2->getNombre() << ":" << alumno2->calcularPromedio() << endl;
	_getch();
	return 0;
}