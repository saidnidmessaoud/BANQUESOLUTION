#pragma once
#include"Devise.h"
class Dollar : public Devise
{
public:
	Dollar(double m);
	void convertToMad();
	void convertToEuro();
	//~Dollar();


private:

};