#pragma once
#include "MoyenPaiement.h"
class CarteBancaire : public MoyenPaiement,public Authentifiable
{
private:
	int Numero;//cle primaire 
	static int count;
	string codeSecret;
	double plafond;
public:
	CarteBancaire(string,string,double);
	bool authentifier()override;
	void recharger(double montant)override; 
	bool payer(double montant)override;
	void afficher()const override;
};

