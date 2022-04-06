#pragma once
#include <iostream>
using namespace std;

class Devise
{
public:
	Devise();
	Devise(double m);
	void afficher()const;
	bool operator>=(const Devise& F)const;
	Devise& operator-(const Devise& F)const;
	Devise& operator+(const Devise& F)const;
	Devise& operator*(const Devise& F)const;
	Devise& operator*(double F)const;
	Devise& operator/(double b)const;
	void afficherDecouvert()const;
	void MadToDollar();
	void MadToEuro();
	void EuroToDollar();
	void EuroToMad();
	void DollarToMad();
	void DollarToEuro();
private:
	double M;
};