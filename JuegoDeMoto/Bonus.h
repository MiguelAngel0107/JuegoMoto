#pragma once
#include "Entidades.h"
class Bonus : public Entidades {
public:
    int contadorBonus = 0;


    Bonus(double px, double py) :Entidades(px, py) {
        x = rand();
    }
    ~Bonus() {}
    void mostrar() {
        Console::ForegroundColor = ConsoleColor::Green;
        Console::SetCursorPosition(x, y + 0); cout << char(254);
    }
    void borrar() {
        Console::SetCursorPosition(x, y + 0); cout << " ";
    }
    void mover() {
        borrar();
        y = y + 1;
        mostrar();
    }
};