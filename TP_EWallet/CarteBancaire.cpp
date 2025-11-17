#include "CarteBancaire.h"

CarteBancaire::CarteBancaire(string t,int N,string Code, double P):MoyenPaiement(t),codeSecret(Code),plafond(P),Numero(N)
{
}

bool CarteBancaire::authentifier()const
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
	if (!authentifier()) {
		cout << "Code PIN incorrect.";
		return false;
	}
	if (montant > this->plafond) {
		cout << "Paiement refuse : depasse le plafond."<<endl;
		return false;
	}
	
	cout << "Paiement Carte Bancaire acceptee."<<endl;
	return true;

}

void CarteBancaire::afficher() const
{
	cout << "Carte Bancaire [ID:" << this->Numero << "] Titulaire: " << this->Titulaire << " | Plafond: " << this->plafond << endl;
		
}
