#include "CompteEpargne.h"

Devise CompteEpargne::TauxInteret = 25;

CompteEpargne::CompteEpargne()
{
}

CompteEpargne::CompteEpargne(Client nom, Devise solde) :Compte(nom, solde)
{
}

void CompteEpargne::calculIntérêt()
{
	this->Update_Compte(CompteEpargne::TauxInteret);
}

void CompteEpargne::consulterSolde() const
{
	CompteEpargne C;
	if (typeid(*this).name() == typeid(C).name())
		this->Compte::consulterSolde();
	CompteEpargne::TauxInteret.afficher();
}
bool CompteEpargne::retirerArgent(Devise montant)
{
	CompteEpargne C;

	if (this->moitie(montant) == true)
	{
		if (typeid(*this).name() == typeid(C).name())
			return this->Compte::retirerArgent(montant);
		return true;
	}
	else
	{
		return false;
	}
}

