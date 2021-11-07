#pragma once
#include "Heure.h"
namespace date {
	class DateH:public Heure {
	private:
		int j, mois, a;
	public:
		DateH(int j, int mois, int a, int h, int minutes, int s);
		void affiche() const;
		bool operator>(const DateH& date);
		bool bissextille(int annne);
		int nbr_j_m(int mois, int annee);
	};
}