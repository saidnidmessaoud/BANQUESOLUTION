#pragma once
#include "Client.h"
#include "Compte.h"
#include <vector>
class App_Banque
{
public:
	App_Banque();
	void ajouter_Client(Client* C1);
	void ajouter_Compte(Compte* C2);
	void afficher_client()const;
	void afficher_compte()const;
	~App_Banque();

private:
	vector<Client*> T_Client;
	vector<Compte*> T_Compte;
};