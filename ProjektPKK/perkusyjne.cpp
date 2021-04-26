#include "perkusyjne.h"

perkusyjne::perkusyjne()
{
}

perkusyjne::perkusyjne(std::string a, unsigned prize, unsigned szt, unsigned tal, unsigned beb):Instrument(a,prize,szt)
{
	l_talerzy = tal;
	l_bebnow = beb;
}

void perkusyjne::dodaj( std::vector<std::shared_ptr<Instrument>> kontener)
{
	std::shared_ptr<perkusyjne> b(this);
	kontener.push_back(b);;
}
