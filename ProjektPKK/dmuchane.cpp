#include "dmuchane.h"



dmuchane::dmuchane()
{
}

dmuchane::dmuchane(std::string a, unsigned prize, unsigned szt, unsigned przy):Instrument(a,prize,szt)
{
	l_przyciskow = przy;
}

std::vector<std::shared_ptr<Instrument>> dmuchane::dodaj( std::vector<std::shared_ptr<Instrument>> kontener)
{
	std::vector<std::shared_ptr<Instrument>> nVECTOR=kontener ;
	std::shared_ptr<dmuchane> b = std::make_shared<dmuchane>(this->nazwa, this->cena, this->l_szt, this->l_przyciskow);
		nVECTOR.push_back(b);
	return nVECTOR;
}

void dmuchane::saveTXT()
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
	w->Write("l_przyciskow:{0};\n", l_przyciskow);
	w->Flush();
	w->Close();
}
