#pragma once
#include "MoyenPaiement.h"
#include"Rechargeable.h"
class ComptePayPal : public MoyenPaiement,public Rechargeable
{
private:
	string adresse_email;
	double solde;
public:
	ComptePayPal(string,string,double);
	bool payer(double montant) override;
	void recharger(double montant)override;
	void afficher()const override;
};

