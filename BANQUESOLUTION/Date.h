#pragma once
class Date
{
public:
	Date(int j = 1, int m = 1, int a = 2000);
	bool estbis() const;
	int maxjours() const;
	void afficher() const;
	int convertToday() const;

private:
	int jour;
	int mois;
	int annee;
};