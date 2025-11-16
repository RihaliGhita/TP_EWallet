#include "MoyenPaiement.h"

MoyenPaiement::MoyenPaiement(string t):Titulaire(t)
{
	cout << "call for Moyenpaiement constructor" << endl;
}


MoyenPaiement::~MoyenPaiement()
{
	cout << "Call for MoyenPaiement Destructor" << endl;
}
