#pragma once
#include <string>
using namespace std;

class Alumno {
private:
	string codigo;
	string nombre;
	double nota1;
	double nota2;
public:
	Alumno(string codigo, string nombre, double nota1, double nota2) {
		this->codigo = codigo;
		this->nombre = nombre;
		this->nota1 = nota1;
		this->nota2 = nota2;
	}
	double calcularPromedio() {
		return (nota1 + nota2) / 2;
	}
	string getNombre() {
		return nombre;
	}
};
