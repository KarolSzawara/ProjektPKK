#include "smyczkowe.h"

strunowe::strunowe()
{
}

strunowe::strunowe(std::string nazwa,double prize,  unsigned szt,unsigned l_str ):Instrument(nazwa,prize,szt)
{
	l_strun = l_str;
}

void strunowe::dodaj(std::string nazwa, double prize, unsigned szt, unsigned l_str)
{
	strunowe a(nazwa,prize,szt,l_str);
	kontener.push_back(&a);
}

smyczkowe::smyczkowe()
{
}

smyczkowe::smyczkowe(std::string nazwa, double prize, unsigned szt, unsigned l_str, float gryf):strunowe(nazwa,prize,szt,l_str)
{
	dl_gryfu = gryf;
}

void smyczkowe::dodaj(std::string nazwa, double prize, unsigned szt, unsigned l_str, float gryf)
{
	smyczkowe a(nazwa, prize, szt, l_str, gryf);
	kontener.push_back(&a);

}
