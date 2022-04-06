#include "Compte.h"
#include "Client.h"
#include <iostream>
using namespace std;

int Compte::cpt = 0;


Compte::Compte() :numCompte(++Compte::cpt)
{
}

Compte::Compte(Client nom, Devise solde) : numCompte(++Compte::cpt)
{
	this->solde = solde;
	this->proprietaire = nom;
	this->historique = vector<Operations>();
}

bool Compte::retirerArgent(Devise montant)
{
	if (this->solde >= montant) {
		this->solde = this->solde - montant;

		Date D(16, 3, 2022);
		Operations* op = new Operations(this->historique.size() + 1, D, montant, "-");
		this->historique.push_back(*op);

		return true;
	}
	else
		return false;
}

void Compte::deposerArgent(Devise montant)
{
	this->solde = this->solde + montant;
	Date D(16, 3, 2022);
	Operations* op = new Operations(this->historique.size() + 1, D, montant, "+");
	this->historique.push_back(*op);
}

void Compte::consulterSolde()const
{
	cout << "le matricule est: " << this->numCompte << "\n";
	this->proprietaire.afficher();
	this->solde.afficher();
}

bool Compte::transfererArgent(Compte* c, Devise somme)
{
	if (this->retirerArgent(somme) == true) {
		c->deposerArgent(somme);
		return true;
	}
	else
		return false;
}

void Compte::Update_Compte(Devise taux_i)
{
	this->deposerArgent(this->solde * (taux_i / 100));
}

bool Compte::operator>=(const Devise& D) const
{
	if (this->solde >= D)
	{
		return true;
	}
	else
	{
		return false;
	}

}

Devise& Compte::moins(const Devise& D)const
{
	Devise* A = new Devise();
	*A = this->solde - D;
	return *A;
}

bool Compte::moitie(const Devise& D) const
{
	Devise E = this->solde / 2;
	if (D >= E)
	{
		return false;
	}
	else
	{
		return true;
	}
}

void Compte::afficher_historique() const
{
	for (int i = 0; i < this->historique.size(); i++)
	{
		this->historique[i].afficher();
	}
}





