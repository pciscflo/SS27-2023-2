#pragma once
class Calculadora {
private:
	double a, b;
public:
	Calculadora(double a, double b) {
		this->a = a;
		this->b = b;
	}

	double getA() {
		return a;
	}

	void setA(double a) {
		this->a = a;
	}

	void setB(double b) {
		this->b = b;
	}

	double suma() {
		return (a + b);
	}

};
