#include "perkusyjne.h"

perkusyjne::perkusyjne()
{
}

perkusyjne::perkusyjne(std::string a, unsigned prize, unsigned szt, unsigned tal, unsigned beb):Instrument(a,prize,szt)
{
	l_talerzy = tal;
	l_bebnow = beb;
}

void perkusyjne::dodaj(std::string a, unsigned prize, unsigned szt, unsigned tal, unsigned beb)
{
	perkusyjne b(a, prize, szt, tal, beb);
	kontener.push_back(&b);
}
