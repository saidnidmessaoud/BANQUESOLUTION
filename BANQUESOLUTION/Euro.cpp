#include "Euro.h"


Euro::Euro(double m) :Devise(m)
{
}

void Euro::convertToDollar()
{
	this->Devise::EuroToDollar();
}

void Euro::convertToMad()
{
	this->Devise::EuroToMad();
}
