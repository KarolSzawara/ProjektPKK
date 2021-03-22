#include <iostream>
#include <deque>
using namespace System;

class Instrument {
protected:
	unsigned cena;
	std::string nazwa;
	unsigned l_szt;
	
public:
	std::deque<Instrument*> kontener;
	Instrument() {}
	
	Instrument(std::string a, unsigned prize, unsigned szt);
	void virtual dodaj(std::string a, unsigned prize, unsigned szt);
	void sprzedaj(int numer);
};