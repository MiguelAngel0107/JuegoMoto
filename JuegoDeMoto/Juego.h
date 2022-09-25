#pragma once
//Clase controladora
#include"Motociclista.h"
#include"Auto.h"
#include"Gato.h"
#include"Bonus.h"
#include"Moneda.h"

class Juego
{
protected:
	Motociclista* objmotociclista;
	Auto* objauto;
	Gato* objGato;
	Bonus* objBonus;
	Moneda* objMoneda;

public:
	int M_final = 0;

	Juego() {
		objmotociclista = new Motociclista(20, 40);
		objauto = new Auto(1, 1);
		objGato = new Gato(1, 1);
		objBonus = new Bonus(1, 1);
		objMoneda = new Moneda(1, 1);
	}
	~Juego() {
		delete objmotociclista;
		delete objauto;
		delete objGato;
		delete objBonus;
		delete objMoneda;
	}

	void mostraGatos()
	{
		
			objGato->borrar();
			objGato->dibujar();
			objGato->mover_H();

			//_sleep(100);
		

	}

	void Inicio_Juego() {
		int T = 0;
		Console::ForegroundColor = ConsoleColor::Red;
		cout << "Inicio de juego" << endl;
		system("pause");
		system("cls");
		while (true) {

			

			//verificar si el jugador puede seguir jugando-Gameover
			if (objmotociclista->get_Lifes() == 0) {
				break;
			}
			//Cosas de la moto
			objmotociclista->borrar();
			objmotociclista->dibujar();
			objmotociclista->mover();

			mostraGatos();

			//Aparece el auto para llevarse la monedas
			if (objmotociclista->Get_Monedas() == 6) {

				objauto->dibujar();
				objauto->mover(objmotociclista->get_x());
				M_final += 6;

			}


			//_sleep(100);
		}


	}
	void Reporte() {

		cout << "\nREPORTE\n";
		cout << "\nRecolectaste " << M_final << " monedas" << endl;
		cout << "\nRecolectaste " << "" << " bonus de vida" << endl;
		//Misión para el Espantaflacas: Estabilizar los bonus.
	}


};


