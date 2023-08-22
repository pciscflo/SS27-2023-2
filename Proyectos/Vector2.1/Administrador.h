#pragma once
#include <string>
#include <vector>
#include "Auto.h"
using namespace std;
class Administrador {
private:
	string nombre;
	vector<Auto*> autos;
public:
	Administrador(string nombre) {
		this->nombre = nombre;
	}
	void registrar(Auto* a) {
		autos.insert(autos.begin(), a); // OJO si se usa autos.push_back() el cursor queda al final y el for lo lee del final
		//mejor usar insert

	}
	vector<Auto*> getAutos() {
		return autos;
	}
	Auto* autoMasCaro() {
		double maxi = 0;
		Auto* a;
		for (int i = 0; i < autos.size(); i++) {
			if (autos[i]->calcularPrecioFinal() > maxi)
			{
				maxi = autos[i]->calcularPrecioFinal();
				a = autos[i];
			}
		}
		return a;
	}
	~Administrador() {
		autos.empty();
	}

};

