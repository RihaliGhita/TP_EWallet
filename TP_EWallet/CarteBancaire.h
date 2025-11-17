#pragma once
#include "MoyenPaiement.h" 
#include "Authentifiable.h"
class CarteBancaire : public MoyenPaiement,public Authentifiable
{
private:
	int Numero;
	string codeSecret;
	double plafond;
public:
	CarteBancaire(string,int,string,double);
	bool authentifier()const override; 
	bool payer(double montant)override;
	void afficher()const override;
};

