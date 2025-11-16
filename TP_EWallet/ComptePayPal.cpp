#include "ComptePayPal.h"

int ComptePayPal::compteur = 0;
ComptePayPal::ComptePayPal(string t, string email, double S):MoyenPaiement(t),adresse_email(email),solde(S)
{
	compteur++;
	this->id = compteur;
}

void ComptePayPal::recharger(double montant)
{ 
	cout << "Veuillez saisir un montant:";
	cin >> montant;
	this->solde += montant;
	cout << "Solde PayPal mis a jour: " << this->solde << endl ;

}

bool ComptePayPal::authentifier()
{ 

	string mail;
	cout << "Veuillez entrer votre code PIN:" << endl;
	cin >> mail;
	return mail == adresse_email;
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
	cout << "PayPal [ID:" << id << "] Titulaire: " << Titulaire << " | Email: " << adresse_email << " | Solde: " << solde << endl;
}