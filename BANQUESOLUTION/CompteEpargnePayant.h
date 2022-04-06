#pragma once
#include "CompteEpargne.h"
#include "ComptePayant.h"
class CompteEpargnePayant :public CompteEpargne, public ComptePayant
{
public:
	CompteEpargnePayant(Client nom, Devise solde);
	bool retirerArgent(Devise montant)override;
	void consulterSolde() const override;


private:


};