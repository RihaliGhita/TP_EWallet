#pragma once
#include<iostream>
using namespace std;
class Rechargeable
{
public:
	virtual void recharger(double montant) = 0;
	virtual ~Rechargeable(){};
};

