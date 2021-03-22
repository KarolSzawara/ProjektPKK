#include "Instrument.h"
Instrument::Instrument(std::string a, unsigned prize, unsigned szt) {
	nazwa = a;
	cena = prize;
	szt = l_szt;
}
void Instrument::dodaj(std::string a, unsigned prize, unsigned szt) 
{
	Instrument b(a, prize, szt);
	kontener.push_back(&b);
}
void Instrument::sprzedaj(int numer) {
	kontener.erase(kontener.begin(), kontener.begin()+numer);
}