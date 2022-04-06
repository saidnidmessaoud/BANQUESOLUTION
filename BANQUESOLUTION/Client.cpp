#include "Client.h"
#include "Compte.h"

Client::Client()
{
	this->nom = "";
	this->prenom = "";
	this->age = 0;
	this->tab = list<Compte*>();
}

Client::Client(string n, string p, int a)
{
	this->nom = n;
	this->prenom = p;
	this->age = a;
	this->tab = list<Compte*>();
}

void Client::afficher() const
{
	cout << "le nom est :" << this->nom << endl;
	cout << "le prenom est :" << this->prenom << endl;
	cout << "l'age est :" << this->age << endl;
	/*for (int i = 0; i < tab.size(); i++)
	{
		this->tab.
	}
	for (int i : this->tab.end()) {
		cout << i << '\n';
	}*/

}

void Client::ajouter(Compte* A)
{
	this->tab.push_back(A);
}

Client::~Client()
{
	this->tab.clear();
}




