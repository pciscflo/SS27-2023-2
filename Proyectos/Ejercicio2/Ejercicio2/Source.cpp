#include <iostream>
#include <conio.h>
#include <Windows.h>
#include "Header.h"
using namespace std;

int main() {
	Raton* a = new Raton(0, 15, 3, 0, 18, 3);

	while (true) {
		a->clear();
		a->mover();
		a->draw();
		Sleep(150);
	}
}