#include "CompteCrypto.h"


CompteCrypto::CompteCrypto(string t,string adress,string cle, double B) :MoyenPaiement(t), adresse_Blockchain(adress), cle_privee(cle), Balance(B)
{
}

bool CompteCrypto::payer(double montant)
{
	if (authentifier()) {
		cout << "cle privee correct." << endl;
		return true;
	}

	if (montant > this->Balance) {
		cout << "Solde crypto insuffisant ." << endl;
		return false;
	}

	Balance -= montant;
	cout << "Paiement Crypto accepte."<<endl;
	return true;
}

bool CompteCrypto::authentifier()
{
	string cle;
	cout << "Entrer cle privee : ";
	cin >> cle;
	return cle == cle_privee;

}

void CompteCrypto::recharger(double montant)  // demander+ajouter
{
	cout << "Veuillez saisir un montant:";
	cin >> montant;
	this->Balance += montant;
	cout << "Balance Crypto mise à jour: " << this->Balance << endl;
}


void CompteCrypto::afficher() const
{
	cout << " Crypto: Son adresse: " << adresse_Blockchain<< " | Solde: " << Balance << endl;
}
