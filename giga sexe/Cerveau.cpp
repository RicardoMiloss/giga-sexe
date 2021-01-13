#include "Cerveau.h"

Cerveau::Cerveau()
{
	neurones = 500'000;
	taille = 50;
}

Cerveau::~Cerveau()
{}

void Cerveau::Reflechir(string pensee)
{
	if (neurones < 250'000) {
		cout << "cerveau trop con : ne peut pas reflechir" << endl;
	}
	else {
		cout << pensee << endl;
		neurones -= 50'000;
	}

}

void Cerveau::Commander()
{
}

void Cerveau::Recevoir(bool sangRecu)
{
	if (sangRecu) {
		neurones += 1000;
	}
	
	void Cerveau::Manger(bool gbienmanger);
}

void Cerveau::Manger()
{
	
}
