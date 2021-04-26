#include "uderzane.h"

uderzane::uderzane()
{
}

uderzane::uderzane(std::string nazwa, double prize, unsigned szt, unsigned l_str, unsigned klaw):strunowe(nazwa,prize,szt,l_str)
{
	l_kl = klaw;
}

void uderzane::dodaj( std::vector<std::shared_ptr<Instrument>> kontener)
{
	std::shared_ptr<uderzane> b(this);
	kontener.push_back(b);
}
