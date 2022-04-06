#include "Dollar.h"

Dollar::Dollar(double m) :Devise(m)
{
}

void Dollar::convertToMad()
{
	this->Devise::DollarToMad();
}

void Dollar::convertToEuro()
{
	this->Devise::DollarToEuro();
}
