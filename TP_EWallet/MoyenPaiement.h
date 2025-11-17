#pragma once
#include<iostream>
using namespace std;
class MoyenPaiement
{
protected:
	string Titulaire;

public:
	MoyenPaiement(string);
	virtual void afficher()const=0;
	virtual bool payer(double montant) = 0;
    virtual ~ MoyenPaiement();
};

