#include "CarteBancaire.h"

int CarteBancaire::count = 0;

CarteBancaire::CarteBancaire(string t,string Code, double P):MoyenPaiement(t),codeSecret(Code),plafond(P)
{
	count++;
	this->Numero = count;
}

bool CarteBancaire::authentifier()
{
	string code;
	cout << "Veuillez entrer votre code PIN:" << endl;
	cin >> code;
	return code == codeSecret;
}

void CarteBancaire::recharger(double montant)
{
}

bool CarteBancaire::payer(double montant)
{
	if (montant > this->plafond) {
		cout << "Paiement refuse : depasse le plafond."<<endl;
		return false;
	}
	if (!authentifier()) {
		cout << "Code PIN incorrect.";
		return false;
	}
	cout << "Paiement Carte Bancaire acceptee."<<endl;
	return true;

}

void CarteBancaire::afficher() const
{
	cout << "Carte Bancaire [ID:" << this->Numero << "] Titulaire: " << this->Titulaire << " | Plafond: " << this->plafond << endl;
		
}
