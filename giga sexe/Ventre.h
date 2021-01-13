#pragma once
#include <iostream>
#include "Coeur.h"
#include "Cerveau.h"
using namespace std;
class Ventre
{
public:
	Ventre();
	~Ventre();

	void Digerer();

private:
	int longueurIntestin;
};

