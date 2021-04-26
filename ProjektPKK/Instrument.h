#include <iostream>
#include <vector>
using namespace System;
#pragma once
class Instrument {
protected:
	unsigned cena;
	std::string nazwa;
	unsigned l_szt;
	
public:
	Instrument() {}
	
	Instrument(std::string a, unsigned prize, unsigned szt);
	void virtual dodaj( std::vector<std::shared_ptr<Instrument>> kontener);
	void sprzedaj(std::string nazwa, std::vector<std::shared_ptr<Instrument>> kontener);
	std::string getNAZWA();
	unsigned getCENA();
	unsigned getLSZT();
};