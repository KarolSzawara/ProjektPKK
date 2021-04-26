#include "Instrument.h"
Instrument::Instrument(std::string a, unsigned prize, unsigned szt) {
	nazwa = a;
	cena = prize;
	szt = l_szt;
}
void Instrument::dodaj( std::vector<std::shared_ptr<Instrument>> kontener)
{
	std::shared_ptr<Instrument> b(this);
	kontener.push_back(b);
}


std::string Instrument::getNAZWA()
{
	return nazwa;
}

unsigned Instrument::getCENA()
{
	return cena;
}

unsigned Instrument::getLSZT()
{
	return l_szt;
}

void Instrument::sprzedaj(std::string nazwa, std::vector<std::shared_ptr<Instrument>> kontener) {
	
	kontener.erase(std::remove_if(kontener.begin(), kontener.end(), [nazwa](std::shared_ptr<Instrument> Sptr) {return Sptr->getNAZWA() == nazwa; })
	);
		
}