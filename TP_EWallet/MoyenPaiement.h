#pragma once
#include<iostream>
#include"Authentifiable.h"
#include"Rechargeable.h"
using namespace std;
class MoyenPaiement:public Authentifiable, public Rechargeable
{
protected:
	string Titulaire;

public:
	MoyenPaiement(string);
	virtual void afficher()const=0;
	virtual bool payer(double montant) = 0;
    virtual ~ MoyenPaiement();
};

