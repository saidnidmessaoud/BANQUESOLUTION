#include "Mad.h"

Mad::Mad(double m) :Devise(m)
{
}

void Mad::convertToDollar()
{
	this->Devise::MadToDollar();
}

void Mad::convertToEuro()
{
	this->Devise::MadToEuro();
}


