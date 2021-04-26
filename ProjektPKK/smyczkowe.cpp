#include "smyczkowe.h"

strunowe::strunowe()
{
}

strunowe::strunowe(std::string nazwa,unsigned prize,  unsigned szt,unsigned l_str ):Instrument(nazwa,prize,szt)
{
	l_strun = l_str;
}

std::vector<std::shared_ptr<Instrument>> strunowe::dodaj( std::vector<std::shared_ptr<Instrument>> kontener)
{
	std::vector<std::shared_ptr<Instrument>> nVector = kontener;
	std::shared_ptr<strunowe> b = std::make_shared<strunowe>(this->nazwa, this->cena, this->l_szt, this->l_strun);
	nVector.push_back(b);
	return nVector;
}

void strunowe::saveTXT()
{
	StreamWriter^ w = gcnew StreamWriter("data.txt", true);
	std::string typ = typeid (*this).name();
	String^ name = gcnew String(typ.c_str());
	w->Flush();
	w->Write("{0}; ", name);
	name = gcnew String(nazwa.c_str());
	w->Write("nazwa:{0};", name);
	w->Write("cena:{0};", cena);
	w->Write("liczba_sztuk:{0};", l_szt);
	w->Write("liczba_strun:{0};\n", l_strun);
	w->Flush();
	w->Close();
}

smyczkowe::smyczkowe()
{
}

smyczkowe::smyczkowe(std::string nazwa,unsigned prize, unsigned szt, unsigned l_str, float gryf):strunowe(nazwa,prize,szt,l_str)
{
	dl_gryfu = gryf;
}

std::vector<std::shared_ptr<Instrument>> smyczkowe::dodaj( std::vector<std::shared_ptr<Instrument>> kontener)
{
	std::vector<std::shared_ptr<Instrument>> nVector = kontener;
	std::shared_ptr<smyczkowe> b = std::make_shared<smyczkowe>(this->nazwa, this->cena, this->l_szt, this->l_strun,this->dl_gryfu);
	nVector.push_back(b);
	return nVector;

}

void smyczkowe::saveTXT()
{
	StreamWriter^ w = gcnew StreamWriter("data.txt", true);
	std::string typ = typeid (*this).name();
	String^ name = gcnew String(typ.c_str());
	w->Flush();
	w->Write("{0}; ", name);
	name = gcnew String(nazwa.c_str());
	w->Write("nazwa:{0};", name);
	w->Write("cena:{0};", cena);
	w->Write("liczba_sztuk:{0};", l_szt);
	w->Write("liczba_strun:{0};", l_strun);
	w->Write("dlugosc_gryfu:{0};\n", dl_gryfu);
	w->Flush();
	w->Close();
}
