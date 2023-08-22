#include <iostream>
#include <conio.h>
#include <vector>
#include <algorithm>

using namespace std;

bool funcion_comparar(int a, int b) {
	return (a < b); //menor a mayor
}

int main() {
	vector<int> notas;

	notas.insert(notas.begin(), 16);
	notas.insert(notas.begin(), 17);
	notas.insert(notas.begin(), 13);
	notas.insert(notas.begin(), 11);
	notas.insert(notas.begin(), 20);

	for (int i = 0; i < notas.size(); i++) {
		cout << notas[i] << " ";
	}
	//ordenando al vector
	sort(notas.begin(), notas.end(), funcion_comparar);
	cout << endl;
	cout << "********** ordenado ********" << endl;
	for (int i = 0; i < notas.size(); i++) {
		cout << notas[i] << " ";
	}
	//eliminando un elemento
	notas.erase(notas.begin());
	cout << "********** menos uno ********" << endl;
	for (int i = 0; i < notas.size(); i++) {
		cout << notas[i] << " ";
	}
	int numeroBuscado = 13;
	auto iterator = find(notas.begin(), notas.end(), numeroBuscado);
	if (iterator != notas.end()) {
		cout << "El numero " << numeroBuscado << " se encontro en la posicion " <<
			iterator - notas.begin() << endl;
	}
	else
	{
		cout << "El numero " << numeroBuscado << "  no se encuentra" << endl;
	}

	_getch();
	return 0;
}