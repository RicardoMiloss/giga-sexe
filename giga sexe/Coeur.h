#pragma once
#include <iostream>
using namespace std;
class Coeur
{
public:
	Coeur();
	~Coeur();

	void Battement();
	bool Send();
	int BPM;
	inline int GetBPM() { return BPM; }

private:
	int taille;
	int temperature;
	bool estMalade;
};

