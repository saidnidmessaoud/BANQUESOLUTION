#include "ComptePayant.h"

ComptePayant::ComptePayant()
{
}

ComptePayant::ComptePayant(Client nom, Devise solde) :Compte(nom, solde)
{
}

bool ComptePayant::retirerArgent(Devise montant)
{
	if (this->operator>=(montant)) {
		return this->Compte::retirerArgent(montant * 1.05);
		return true;
	}
	else
	{
		return false;
	}
}

void ComptePayant::deposerArgent(Devise montant)
{
	this->Compte::deposerArgent(montant - (montant * (5 / 100)));
}

void ComptePayant::consulterSolde() const
{
	ComptePayant C;
	if (typeid(*this).name() == typeid(C).name())
		this->Compte::consulterSolde();
}

