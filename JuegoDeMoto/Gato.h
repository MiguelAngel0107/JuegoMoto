
#pragma once
#include"Entidades.h"


class Gato : public Entidades
{
public:
	//variables publicas
	int r = rand() % 2 + 1;
	int dx = 1;

	Gato(double px, double py) :Entidades(px, py) {

	}
	~Gato() {}
	void borrar() {
		Console::SetCursorPosition(x, y + 0); cout << "   ";
		Console::SetCursorPosition(x, y + 1); cout << "   ";
	}

	void dibujar() {
		Console::SetCursorPosition(x, y + 0); cout << "^^ ";
		Console::SetCursorPosition(x, y + 1); cout << "XX?";

	}
	//Lluvia
	void mover_H() {
	
		
		if (x > 78 || x < 1) { dx *= -1; }

		x = x + dx;
	
	}
	void mover_V() {
		borrar();
		for (int i = 0; i < rand() % 7 + 1; i++) {
			y++;
		}
		
	}
	double get_X() { return this->x; }
	double get_Y() { return this->y; }
};


