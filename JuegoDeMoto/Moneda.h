#pragma once
#include"Entidades.h"

class Moneda : public Entidades
{
public:
	//variables publicas


	Moneda(double px, double py) :Entidades(px, py) {

	}
	~Moneda() {}
	void borrar() {
		Console::SetCursorPosition(x, y + 0); cout << " ";
	}

	void dibujar() {
		Console::SetCursorPosition(x, y + 0); cout << "*";

	}

	double get_X() { return this->x; }
	double get_Y() { return this->y; }
};
