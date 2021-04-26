#include "dmuchane.h"

dmuchane::dmuchane()
{
}

dmuchane::dmuchane(std::string a, unsigned prize, unsigned szt, unsigned przy):Instrument(a,prize,szt)
{
	l_przyciskow = przy;
}

void dmuchane::dodaj( std::vector<std::shared_ptr<Instrument>> kontener)
{
	std::shared_ptr<dmuchane> b(this);
	kontener.push_back(b);;
}
