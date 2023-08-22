#pragma once
#include <cmath>
class Cubo {
private:
	double lado;
public:
	Cubo(double lado) {
		this->lado = lado;
	}
	double getLado() {
		return lado;
	}
	void setLado(double lado) {
		this->lado = lado;
	}
	double calcularVolumen() {
		return pow(lado, 3);
	}
	~Cubo() {

	}
};
