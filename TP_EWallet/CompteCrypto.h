#pragma once
#include "MoyenPaiement.h"
#include"Authentifiable.h"
#include"Rechargeable.h"
class CompteCrypto : public MoyenPaiement,public Authentifiable,public Rechargeable
{
private:
	string adresse_Blockchain;
	string cle_privee;
	double Balance;
public:
	CompteCrypto(string,string,string,double);
	bool payer(double montant) override;
	bool authentifier()const override;
	void recharger(double montant)override;
	void afficher()const override;

   
};

