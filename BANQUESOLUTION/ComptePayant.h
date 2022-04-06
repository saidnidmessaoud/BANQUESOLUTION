#pragma once
#include "Compte.h"
class ComptePayant :public virtual Compte
{
public:
	ComptePayant();
	ComptePayant(Client nom, Devise solde);
	bool retirerArgent(Devise montant)override;
	void deposerArgent(Devise montant)override;
	void consulterSolde() const override;
private:

};