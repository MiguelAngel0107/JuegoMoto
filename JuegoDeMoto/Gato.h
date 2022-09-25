
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
	void borrar(int y) {
		Console::SetCursorPosition(x, y + 0); cout << "   ";
		Console::SetCursorPosition(x, y + 1); cout << "   ";
	}

	void dibujar(int y) {
		Console::SetCursorPosition(x, y + 0); cout << "^^ ";
		Console::SetCursorPosition(x, y + 1); cout << "XX?";

	}
	//Lluvia


	void mover_H(int y) {
	
		this->y = y;
		if (x > 78 || x < 1) { dx *= -1; }
		x = x + dx;
	
	}
	
};


