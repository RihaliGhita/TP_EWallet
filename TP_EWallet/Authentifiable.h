#pragma once
#include<iostream>
using namespace std;
class Authentifiable
{
public:
	virtual bool authentifier() const = 0;
	virtual~Authentifiable(){};
};

