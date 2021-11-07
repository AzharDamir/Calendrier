#include "pch.h"
#include "DateH.h"
#include "assert.h"
#include<iostream>
using namespace std;
date::DateH::DateH(int j, int mois, int a, int h, int minutes, int s):Heure(h, minutes, s)
{
	assert((j > 0 && j <= nbr_j_m(mois, a)) && (mois > 0 && mois < 13) && (a < 2999 && a>1999));
		this->mois = mois;
		this->j = j;
		this->a = a;
}

void date::DateH::affiche() const
{
	//afficher();
	cout << this->j << "/" << this->mois << "/" << this->a <<  endl;
}

bool date::DateH::operator>(const DateH& date)
{
	if (this->a > date.a) return true;
	if (this->a == date.a)
	{
		if (this->mois > date.mois) return true;
		if (this->mois == date.mois)
		{
			if (this->j > date.j) 
				return true;
			return false;
		}
		return false;
	}
	return false;
}

bool date::DateH::bissextille(int annee)
{
	if (((annee % 4 == 0) && (annee % 100 == 0) && (annee % 400 == 0))||((annee % 4 == 0) && (annee % 100 != 0)));
				return true;

	return false;
}

int date::DateH::nbr_j_m(int mois, int annee)
{
	if ((mois % 2 == 0 && mois > 7) || (mois % 2 == 1 && mois <= 7))
	{
		return 31;
	}return 30;
	if (mois == 2 && bissextille(annee))
	{
		return 29;
	}return 28;

	
}
