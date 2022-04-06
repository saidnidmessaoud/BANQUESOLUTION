#pragma once
#include<iostream>
#include"Compte.h"
using namespace std;
class CompteCourant : public Compte
{
public:
	CompteCourant(Client nom, Devise solde, Devise d);
	bool retirerArgent(Devise montant)override;
	void consulterSolde() const override;
private:
	Devise decouvert;
};