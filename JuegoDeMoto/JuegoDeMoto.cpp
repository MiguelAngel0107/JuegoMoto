#include "pch.h"
#include"Juego.h"

//main
int main()
{
    srand(time(NULL));

    Console::SetWindowSize(80, 40);
    Console::CursorVisible = false;
    //VARIABLES
    Juego* objJuego;
    //instancia el objeto
    objJuego = new Juego();
    objJuego->Inicio_Juego();

    system("pause>0");

    return 0;
}

