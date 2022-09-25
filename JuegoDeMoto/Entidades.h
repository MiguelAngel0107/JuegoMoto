#pragma once
#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace System;
using namespace std;

class Entidades
{
public:
	Entidades(double px, double py) {
		this->x = px;
		this->y = py;
	}
	~Entidades(){};

	double get_x() { return this->x; }
	double get_y() { return this->y; }

protected:
	double x, y;

};
