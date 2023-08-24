#include <iostream>
#include <vector>
#include <conio.h>
#include <algorithm>
#include "Auto.h"
#include "Administrador.h"

/*
* Desarrollar un programa en C++ tal que permita a la Empresa "Multiautos" gestionar la venta
  de autos, los datos de los autos que debe registrar son: codigo, marca, modelo, precio
  de costo y stock.
  El precio final es igual al precio de costo más el IGV menos el descuento.
* El descuento consiste en que si el stock es maytor que 100 entonces se aplica un descuento
* del 20% sobre el precio de costo.
* Imprimir un reporte donde muestre los datos del auto y su precio final.
*/

bool compararPorPrecio(Auto* auto1, Auto* auto2) {
	return auto1->calcularPrecioFinal() > auto2->calcularPrecioFinal();
}

int main() {
	Administrador administrador("Pepe");// Administrador* administrador = new Administrador("Pepe");
	Auto* auto1 = new Auto(120, "Volvo", "Jetta", 111000, 12);
	Auto* auto2 = new Auto(122, "Toyota", "Yaris", 75000, 12);
	Auto* auto3 = new Auto(320, "Subaru", "Mounthain", 88000, 12);
	Auto* auto4 = new Auto(420, "VMW", "A3", 99000, 12);

	administrador.registrar(auto1);
	administrador.registrar(auto2);
	administrador.registrar(auto3);
	administrador.registrar(auto4);

	vector<Auto*> lista = administrador.getAutos();
	sort(lista.begin(), lista.end(), compararPorPrecio);
	for (int i = 0; i < lista.size(); i++) {
		cout << "Codigo:" << lista[i]->getCodigo() << " Marca:"
			<< lista[i]->getMarca() << " Precio Final:"
			<< lista[i]->calcularPrecioFinal() << endl;
	}

	Auto* caro = administrador.autoMasCaro();
	cout << "El auto mas caro es: " << caro->getMarca() << " Final:"
		<< caro->calcularPrecioFinal() << endl;


	_getch();

	//return 0;
}