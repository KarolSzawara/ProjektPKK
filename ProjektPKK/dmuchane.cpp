#include "dmuchane.h"

dmuchane::dmuchane()
{
}

dmuchane::dmuchane(std::string a, unsigned prize, unsigned szt, unsigned przy):Instrument(a,prize,szt)
{
	l_przyciskow = przy;
}

void dmuchane::dodaj(std::string a, unsigned prize, unsigned szt, unsigned przy)
{
	dmuchane temp(a, prize, szt, przy);
	kontener.push_back(&temp);
}
