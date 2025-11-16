#pragma once
#include<iostream>
#include"MoyenPaiement.h"
using namespace std;
class E_Wallet
{
private:
	MoyenPaiement** listeComptes;
	int capacite;
	int nbreComptes;
public:
	E_Wallet(int );
	void ajouter(MoyenPaiement*);
	void payerIndividuelle(int ,double);
	void payerGlobal(double );
	void afficher()const;
	~E_Wallet();


};

