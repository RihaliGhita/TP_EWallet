#include "E_Wallet.h"
#include"MoyenPaiement.h"

E_Wallet::E_Wallet(int max)
{
	this->capacite = max;
	this->nbreComptes = 0;
	this->listeComptes = new MoyenPaiement * [this->capacite];
	for (int i = 0; i < this->capacite; i++)
		this->listeComptes[i] = nullptr;
}

void E_Wallet::ajouter(MoyenPaiement* NvMoyen)
{
	if (nbreComptes > capacite) {
		cout << "E-Wallet plein." << endl;
	}
	else {
		listeComptes[nbreComptes++] = NvMoyen;
	}

}

void E_Wallet::payerIndividuelle(int indice,double montant)
{
	if (indice < 0 || indice >= nbreComptes) {
		cout << "Indice invalide." << endl;
	}
	this->listeComptes[indice]->payer(montant);   //selon l'indice donnee va appeler la methode payer du moyen concerne
}

void E_Wallet::payerGlobal(double montant)
{
	cout << "Paiement GLOBAL : " << montant << endl;
	for (int i = 0; i < this->nbreComptes; i++)
		this->listeComptes[i]->payer(montant);
}

void E_Wallet::afficher() const
{
	cout << " --- Comptes dans EWallet --- " << endl ;
	for (int i = 0; i <nbreComptes; i++)
		listeComptes[i]->afficher();
}

E_Wallet::~E_Wallet()
{
	for (int i = 0; i < nbreComptes; i++) {
		delete listeComptes[i];
		this->listeComptes[i] = nullptr;
	}

	delete[] this->listeComptes;
}
