#include "CompteCourant.h"

CompteCourant::CompteCourant(Client nom, Devise solde, Devise d) :Compte(nom, solde)
{
	this->decouvert = d;
}

bool CompteCourant::retirerArgent(Devise montant)
{
	/*if (this->operator>=(montant + this->decouvert))
	{
		this->Compte::retirerArgent(montant);
	}
	else
	{
		return false;
	}*/
	Devise A = this->moins(montant);
	if (A.operator>=(this->decouvert))
	{
		this->Compte::retirerArgent(montant);
		return true;
	}
	else
	{
		return false;
	}
}

void CompteCourant::consulterSolde() const
{
	this->Compte::consulterSolde();
	this->decouvert.afficherDecouvert();
}

