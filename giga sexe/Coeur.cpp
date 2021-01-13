#include "Coeur.h"

Coeur::Coeur()
{
	BPM = 80;
	taille = 30;
	temperature = 37;
	estMalade = false;
}

Coeur::~Coeur()
{
}

void Coeur::Battement()
{
	cout << "Toudoum toudoum" << endl;
	BPM -= 5;
}

bool Coeur::Send()
{
	Battement();
	if (BPM < 40) {
		cout << "Battements insuffisants" << endl;
		return false;

	}
	else {
		cout << "sang envoye" << endl;
		return true;
	}
}
