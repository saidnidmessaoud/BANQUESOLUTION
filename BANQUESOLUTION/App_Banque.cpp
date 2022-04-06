#include "App_Banque.h"

App_Banque::App_Banque()
{
	this->T_Client = vector<Client*>();
	this->T_Compte = vector<Compte*>();
}

void App_Banque::ajouter_Client(Client* C1)
{
	this->T_Client.push_back(C1);
}

void App_Banque::ajouter_Compte(Compte* C2)
{
	this->T_Compte.push_back(C2);
}

void App_Banque::afficher_client() const
{
	for (int i = 0; i < this->T_Client.size(); i++)
	{
		this->T_Client[i]->Client::afficher();
	}
}

void App_Banque::afficher_compte() const
{
	for (int i = 0; i < this->T_Compte.size(); i++)
	{
		this->T_Compte[i]->Compte::consulterSolde();
	}
}

App_Banque::~App_Banque()
{
	this->T_Client.clear();
	this->T_Compte.clear();
}
