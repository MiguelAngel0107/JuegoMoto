#pragma once
#include<iostream>
#include<conio.h>
#include "Entidades.h"
#include "Gato.h"
#include "Moneda.h"
#include "Auto.h"


class Motociclista : public Entidades {
protected:
	int Lifes = 5;
	int coins = 0;
	char cTecla;

	Moneda* objMoneda;
	Auto* objAuto;


public:

	Motociclista(double px, double py) : Entidades(px, py) {}
	~Motociclista() {}
	//Posiciones de motocicleta
	double get_x() { return this->x; }
	double get_y() { return this->y; }

	//Borrar moto
	void borrar() {
		Console::SetCursorPosition(x, y + 0); cout << "     ";
		Console::SetCursorPosition(x, y + 1); cout << "      ";
	}

	//Dibujar Moto
	void dibujar() {
		Console::SetCursorPosition(x, y + 0); cout << "---_\\";
		Console::SetCursorPosition(x, y + 1); cout << "(O)(O)";
	}

	//Mover Moto
	void mover() {

		cTecla = getch();
		if (cTecla != char(27)) {

			borrar();
			if (cTecla == 0) cTecla = getch();
			if (cTecla == char(75)) --x; //Flecha hacia la izquierda
			if (cTecla == char(77)) ++x; //Flecha hacia la derecha
			if (cTecla == char(72)) --y; //Flecha hacia arriba
			if (cTecla == char(80)) ++y; //Flecha hacia abajo
			dibujar();
		}
	}

	void monedas() {

		if (get_x() == objMoneda->get_x() && get_y() == objMoneda->get_y()) {
			coins++;
		}

		if (coins == 6) {

			objAuto->borrar();
			objAuto->mover(get_x());
			objAuto->dibujar();

			coins = 0;
		}

	}

	int Get_Monedas() {
		return coins;
		if (coins == 6) {
			coins == 0;
		}

		//return coins;
	}

	int get_Lifes() { return this->Lifes; }
};

