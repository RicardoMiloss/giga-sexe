//GigaSexe GigaPied Torse Jambe Tête Cerveau Coeur Bras Mains

#include <iostream>
#include "Coeur.h"
#include "Cerveau.h"
using namespace std;
int main() 
{
	Coeur cum;
	Cerveau ricardo;

	while (cum.GetBPM() > 0) {
		ricardo.Recevoir(cum.Send());
		string pensee;
		getline(cin, pensee);
		ricardo.Reflechir(pensee);
		ricardo.Manger(cum.Send());
	}
	cout << "Mon vrer, tu es mort" << endl;


	return 0;
}

