#include "ComptePayPal.h"


ComptePayPal::ComptePayPal(string t, string email, double S):MoyenPaiement(t),adresse_email(email),solde(S)
{
}

void ComptePayPal::recharger(double montant)
{ 
	cout << "Veuillez saisir un montant:";
	cin >> montant;
	this->solde += montant;
	cout << "Solde PayPal mis a jour: " << this->solde << endl ;

}


bool ComptePayPal::payer(double montant)
{
	if (montant > this->solde) {
		cout << "Solde insuffisant PayPal." << endl;
		return false;
	}
	this->solde -= montant;
	cout << "Paiement PayPal effectue."<< endl;
	return true;
}

void ComptePayPal::afficher() const
{
	cout << "PayPal : Titulaire: " << Titulaire << " | Email: " << adresse_email << " | Solde: " << solde << endl;
}
