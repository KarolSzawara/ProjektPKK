#include <iostream>
#include <vector>
using namespace System;
using namespace System::IO;
#pragma once
class Instrument {
protected:
	unsigned cena;
	std::string nazwa;
	unsigned l_szt;
	
public:
	Instrument() {}
	~Instrument() {}
	Instrument(std::string a, unsigned prize, unsigned szt);
	std::vector<std::shared_ptr<Instrument>> virtual dodaj( std::vector<std::shared_ptr<Instrument>> kontener);
	void virtual sprzedaj(std::string nazwa, std::vector<std::shared_ptr<Instrument>> kontener);
	std::string getNAZWA();
	unsigned getCENA();
	unsigned getLSZT();
	void virtual saveTXT();
};