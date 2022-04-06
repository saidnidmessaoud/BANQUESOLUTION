#pragma once
#include<iostream>
#include"Compte.h"
using namespace std;
class CompteEpargne : public virtual Compte
{
public:
	CompteEpargne();
	CompteEpargne(Client nom, Devise solde);
	void calculInt�r�t();
	void consulterSolde() const override;
	bool retirerArgent(Devise montant)override;
private:
	static Devise TauxInteret;
};
