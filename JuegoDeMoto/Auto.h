#pragma once
#include "Entidades.h"
#include "Motociclista.h"

class Auto : public Entidades
{	
public:
	Auto(double px, double py) :Entidades(px, py) {
	}
	~Auto() {}

	void borrar() {
		Console::SetCursorPosition(x, y + 0); cout << "         ";
		Console::SetCursorPosition(x, y + 1); cout << "         ";
		Console::SetCursorPosition(x, y + 1); cout << "         ";
	}

	void dibujar() {
		Console::SetCursorPosition(x, y + 0); cout << " ___     ";
		Console::SetCursorPosition(x, y + 1); cout << "|    \\___";
		Console::SetCursorPosition(x, y + 1); cout << "‘-O---O-J";

	}
	//Camino hacia la recoleccion de monedas
	void mover() {
		for (int i = 0; i < 100; i++) {
			x++;
			if (x == 80) {
				break;
			}
		}
		borrar();

		_sleep(100);
	}
	void mover(double X) {
		if (get_x() == X)
		{
			x++;
		}
	}
};