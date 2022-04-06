#pragma once
#include<List>
#include<iostream>
using namespace std;
class Compte;
class Client
{
public:
	Client();
	Client(string n, string p, int a);
	void afficher()const;
	void ajouter(Compte* A);
	~Client();


private:
	string nom;
	string prenom;
	int age;
	list<Compte*> tab;
};