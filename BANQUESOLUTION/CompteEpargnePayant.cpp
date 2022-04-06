#include "CompteEpargnePayant.h"

CompteEpargnePayant::CompteEpargnePayant(Client nom, Devise solde) :CompteEpargne(nom, solde), ComptePayant(nom, solde), Compte(nom, solde)
{
}

bool CompteEpargnePayant::retirerArgent(Devise montant)
{
	if (this->CompteEpargne::retirerArgent(montant) == true) {
		return this->ComptePayant::retirerArgent(montant * 1.05);
	}
	return false;
}

void CompteEpargnePayant::consulterSolde() const
{
	this->Compte::consulterSolde();
	this->CompteEpargne::consulterSolde();
	this->ComptePayant::consulterSolde();
}


