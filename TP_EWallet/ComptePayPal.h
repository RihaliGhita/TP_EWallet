#pragma once
#include "MoyenPaiement.h"
class ComptePayPal : public MoyenPaiement,public Rechargeable
{
private:
	static int compteur;
	int id;
	string adresse_email;
	double solde;
public:
	ComptePayPal(string,string,double);
	bool payer(double montant) override;
	void recharger(double montant)override;
	bool authentifier()override;
	void afficher()const override;

	
};

