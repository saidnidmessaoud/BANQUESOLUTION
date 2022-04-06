#include "Date.h"
#include<iostream>

Date::Date(int j, int m, int a)
{
    this->annee = (a >= 1900) ? a : 1900;
    this->mois = (m > 0 && m < 13) ? m : 1;
    this->jour = (j > 0 && j <= this->maxjours()) ? j : 1;
}

bool Date::estbis() const
{
    if (this->annee % 4 == 0)
        return true;
    else
        return false;
}

int Date::maxjours() const
{
    int max;

    if (this->mois == 2) {
        if (this->estbis())
            max = 29;
        else
            max = 28;
    }

    else if ((this->mois > 7 && this->mois % 2 == 1) || (this->mois < 7 && this->mois % 2 == 0))
    {
        max = 30;
    }
    else max = 31;

    return  max;
}

void Date::afficher() const
{
    std::cout << this->jour << "/" << this->mois << "/" << this->annee << std::endl;
}

int Date::convertToday() const
{
    int res;
    if (this->estbis()) {
        res = this->annee * 366 + this->mois * this->maxjours() + this->jour;
    }
    else
        res = this->annee * 365 + this->mois * this->maxjours() + this->jour;
    return res;
}


