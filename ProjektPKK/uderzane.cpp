#include "uderzane.h"

uderzane::uderzane()
{
}

uderzane::uderzane(std::string nazwa, double prize, unsigned szt, unsigned l_str, unsigned klaw):strunowe(nazwa,prize,szt,l_str)
{
	l_kl = klaw;
}

void uderzane::dodaj(std::string nazwa, double prize, unsigned szt, unsigned l_str, unsigned klaw)
{
	uderzane a(nazwa, prize, szt, l_str, klaw);
	kontener.push_back(&a);
}
