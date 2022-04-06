#pragma once
#include "Devise.h"
#include"Client.h"
#include<vector>
#include"Operations.h"

class Compte {
private:
	static int cpt;
	int numCompte;
	Client proprietaire;
	Devise solde;
	vector<Operations> historique;
public:
	Compte();
	Compte(Client nom, Devise solde);
	virtual bool retirerArgent(Devise montant);
	virtual void deposerArgent(Devise montant);
	virtual void consulterSolde() const = 0;
	bool transfererArgent(Compte* c, Devise somme);
	void Update_Compte(Devise taux_i);
	bool operator>=(const Devise& D)const;
	Devise& moins(const Devise& D)const;
	bool moitie(const Devise& D)const;
	void afficher_historique() const;

};