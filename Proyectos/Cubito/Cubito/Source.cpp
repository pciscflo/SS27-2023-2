#include <iostream>
#include <conio.h>
#include "Header.h"
using namespace std;
//Ejemplo de Cubo clase
int main() {
	Cubo* cubo = new Cubo(8);
	cout << "El volumen del cubo es:" << cubo->calcularVolumen() << endl;
	_getch();
	return 0;
}