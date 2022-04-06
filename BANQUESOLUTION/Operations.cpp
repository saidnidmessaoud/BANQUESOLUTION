#include "Operations.h"

Operations::Operations(int n, Date d, Devise s, string lib)
{
	this->numero = n;
	this->DT = d;
	this->solde = s;
	this->libelle = lib;
}

void Operations::afficher() const
{
	cout << this->libelle << " : " << endl;
	this->DT.afficher();
	cout << " | n° " << this->numero << " | ";
	this->solde.afficher();
}
