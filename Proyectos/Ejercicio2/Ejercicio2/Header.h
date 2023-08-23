#pragma once
#include <iostream>
#include <conio.h>
#include <windows.h>
#define ANCHO  110
#define ALTO  60

using namespace std;
using namespace System;


void gotoxy(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

class Raton {
private:
	int x, y;
	int dx, dy;
	int ancho, alto;
public:
	Raton(int x, int y, int dx, int dy, int ancho, int alto) {
		this->x = x;
		this->y = y;
		this->dx = dx;
		this->dy = dy;
		this->ancho = ancho;
		this->alto = alto;
	}
	void draw() {
		if (dx >0) {
			gotoxy(x, y);
			cout << "        ____()()";
			gotoxy(x, y + 1);
			cout << "      /      @@";
			gotoxy(x, y + 2);
			cout << "`~~~~~\_;m__m._>o";
		}
		else {
			gotoxy(x, y);
			cout << "  ( )( )____";
			gotoxy(x, y + 1);
			cout << "  @@ \\";
			gotoxy(x, y + 2);
			cout << "o<_.m__m;_/~~~~~`";
		}
	}
	void clear() {
		for (int i = 0; i < alto; i++) {
			for (int j = 0; j < ancho; j++) {
				gotoxy(x + j, y + i);
				cout << " ";
			}
		}
	}

	void mover() {
		if (!(x + dx > 0 && (x + ancho + dx) < ANCHO))
			dx *= -1;
		if (!(y + dy > 0 && y + alto + dy < ALTO))
			dy *= -1;
		x += dx;
		y += dy;
	}
};
