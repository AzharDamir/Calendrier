#include "pch.h"
#include "Heure.h"
#include <iostream>
using namespace std;

date::Heure::Heure(int h, int m, int s)
{
	if (h < 0 || h>23)
	{
		h = 0;
	}
	 else 
	 this->h=h;
	
	  if (m < 0 || m>59)
		 m = 0;
	  else
		  this->m=m;
	 if (s < 0 || s>59)
		 s = 0;
	 else
		 this->s=s;

}

date::Heure::Heure(const Heure& H)
{
	this->h = H.h;
	this->m = H.m;
	this->s = H.s;
}

void date::Heure::afficher() const
{
	cout << this->h << "h:" << this->m << "m:" << this->s << "s" << endl;
}

bool date::Heure::operator>(const Heure& heure) const
{
	if (this->h > heure.h) return true;
	if (this->h == heure.h)
	{
		if (this->m > heure.m) return true;
		if (this->m == heure.m)
		{
			if (this->s > heure.s)
				return true;
			return false;
		}
		return false;
	}
	return false;
}
