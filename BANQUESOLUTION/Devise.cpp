#include "Devise.h"

Devise::Devise()
{
	this->M = 0;
}

Devise::Devise(double m)
{
	this->M = m;
}

void Devise::afficher() const
{
	cout << "L'argent : " << this->M << " MAD " << endl;
}

bool Devise::operator>=(const Devise& F) const
{
	if (this->M >= F.M)
	{
		return true;
	}
	return false;
}

Devise& Devise::operator-(const Devise& F)const
{
	Devise* A = new Devise();
	A->M = this->M - F.M;
	return *A;
}

Devise& Devise::operator+(const Devise& F)const
{
	Devise* A = new Devise();
	A->M = this->M + F.M;
	return *A;
}

Devise& Devise::operator*(const Devise& F)const
{
	Devise* A = new Devise();
	A->M = this->M * F.M;
	return *A;
}

Devise& Devise::operator*(double F) const
{
	Devise* A = new Devise();
	A->M = this->M * F;
	return *A;
}

Devise& Devise::operator/(double b) const
{
	Devise* A = new Devise();
	A->M = this->M / b;
	return *A;
}

void Devise::afficherDecouvert() const
{
	cout << "Decouvert : " << this->M << " MAD " << endl;
}

void Devise::MadToDollar()
{
	double A = this->M / 8;
	cout << "le montant en dollar est " << A << endl;
}

void Devise::MadToEuro()
{
	double A = this->M / 10;
	cout << "le montant en euro est " << A << endl;
}

void Devise::EuroToDollar()
{
	double A = this->M / 0.8;
	cout << "le montant en dollar est " << A << endl;
}

void Devise::EuroToMad()
{
	double A = this->M * 10;
	cout << "le montant en mad est " << A << endl;
}

void Devise::DollarToMad()
{
	double A = this->M * 8;
	cout << "le montant en mad est " << A << endl;
}

void Devise::DollarToEuro()
{
	double A = this->M * 0.8;
	cout << "le montant en euro est " << A << endl;
}


