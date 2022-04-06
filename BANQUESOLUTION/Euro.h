#pragma once
#include"Devise.h"
class Euro :public Devise
{
public:
	Euro(double m);
	void convertToDollar();
	void convertToMad();
	//~Euro();

private:

};