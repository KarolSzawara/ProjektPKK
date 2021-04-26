#include "Instrument.h"

Instrument::Instrument(std::string a, unsigned prize, unsigned szt) {
	nazwa = a;
	cena = prize;
	l_szt = szt;
}
std::vector<std::shared_ptr<Instrument>> Instrument::dodaj( const std::vector<std::shared_ptr<Instrument>> kontener)
{
	std::vector<std::shared_ptr<Instrument>> nVECTOR = kontener;
	std::shared_ptr<Instrument> b(this);
	nVECTOR.push_back(b);
	return nVECTOR;
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

void  Instrument::saveTXT()
{
		
	StreamWriter^ w = gcnew StreamWriter("data.txt",true);
	std::string typ=typeid (*this).name();
	String^ name=gcnew String(typ.c_str());
	w->Flush();
	w->Write("{0}; ", name);
	name= gcnew String(nazwa.c_str());
	w->Write("nazwa:{0};",name); 
	w->Write("cena:{0};",cena);
	w->Write("liczba_sztuk:{0};\n",l_szt);
	w->Flush();
	w->Close();
}

void Instrument::sprzedaj(std::string nazwa, std::vector<std::shared_ptr<Instrument>> kontener) {
	
	kontener.erase(std::remove_if(kontener.begin(), kontener.end(), [nazwa](std::shared_ptr<Instrument> Sptr) {return Sptr->getNAZWA() == nazwa; })
	);
		
}