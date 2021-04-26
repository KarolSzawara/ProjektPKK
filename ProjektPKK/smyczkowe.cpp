#include "smyczkowe.h"

strunowe::strunowe()
{
}

strunowe::strunowe(std::string nazwa,double prize,  unsigned szt,unsigned l_str ):Instrument(nazwa,prize,szt)
{
	l_strun = l_str;
}

void strunowe::dodaj( std::vector<std::shared_ptr<Instrument>> kontener)
{
	std::shared_ptr<strunowe> b(this);
	kontener.push_back(b);
}

smyczkowe::smyczkowe()
{
}

smyczkowe::smyczkowe(std::string nazwa, double prize, unsigned szt, unsigned l_str, float gryf):strunowe(nazwa,prize,szt,l_str)
{
	dl_gryfu = gryf;
}

void smyczkowe::dodaj( std::vector<std::shared_ptr<Instrument>> kontener)
{
	std::shared_ptr<smyczkowe> b(this);
	kontener.push_back(b);

}
