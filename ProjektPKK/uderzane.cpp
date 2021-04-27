#include "uderzane.h"

uderzane::uderzane()
{
}

uderzane::uderzane(std::string nazwa, unsigned prize, unsigned szt, unsigned l_str, unsigned klaw):strunowe(nazwa,prize,szt,l_str)
{
	l_kl = klaw;
}

std::vector<std::shared_ptr<Instrument>> uderzane::dodaj( std::vector<std::shared_ptr<Instrument>> kontener)
{
	std::vector<std::shared_ptr<Instrument>> nVector = kontener;
	std::shared_ptr<uderzane> b = std::make_shared<uderzane>(this->nazwa, this->cena, this->l_szt, this->l_strun,this->l_kl);
	nVector.push_back(b);
	return nVector;
}

void uderzane::saveTXT()
{
	StreamWriter^ w = gcnew StreamWriter("data.txt", true);
	std::string typ = typeid (*this).name();
	typ.erase(typ.begin(), typ.begin() + 6);
	String^ name = gcnew String(typ.c_str());
	w->Flush();
	w->Write("{0}; ", name);
	name = gcnew String(nazwa.c_str());
	w->Write("nazwa:{0};", name);
	w->Write("cena:{0};", cena);
	w->Write("liczba_sztuk:{0};", l_szt);
	w->Write("liczba_strun:{0};", l_strun);
	w->Write("liczba_klawiszy:{0};\n", l_kl);
	w->Flush();
	w->Close();
}
