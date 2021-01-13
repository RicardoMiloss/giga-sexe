#pragma once
#include <iostream>
#include <string>

using namespace std;
class Cerveau
{
public:
	Cerveau();
	~Cerveau();
	void Reflechir(string pensee);
	void Commander();
	void Recevoir(bool sansRecu);
	void Manger();

private:
	int neurones;
	int taille;
};

