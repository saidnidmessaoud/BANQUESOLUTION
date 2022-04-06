#pragma once
#include <iostream>
#include "Date.h"
#include "Devise.h"
using namespace std;

class Operations
{
public:
	Operations(int n, Date d, Devise s, string lib);
	void afficher()const;

private:
	int numero;
	Date DT;
	Devise solde;
	string libelle;
};