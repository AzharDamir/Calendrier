#pragma once
namespace date{
	class Heure {
	protected:
		int h, m, s;
	public:
		Heure(int h, int m, int s);
		Heure(const Heure& H);
		void afficher() const;
		bool operator>(const Heure& heure) const;

	};

}