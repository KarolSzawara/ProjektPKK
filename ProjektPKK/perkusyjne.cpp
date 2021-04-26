#include "perkusyjne.h"



perkusyjne::perkusyjne()
{
}

perkusyjne::perkusyjne(std::string a, unsigned prize, unsigned szt, unsigned tal, unsigned beb):Instrument(a,prize,szt)
{
	l_talerzy = tal;
	l_bebnow = beb;
}

std::vector<std::shared_ptr<Instrument>> perkusyjne::dodaj( std::vector<std::shared_ptr<Instrument>> kontener)
{
	std::vector<std::shared_ptr<Instrument>> nVector=kontener;
	std::shared_ptr<perkusyjne> b = std::make_shared<perkusyjne>(this->nazwa, this->cena, this->l_szt, this->l_talerzy,this->l_bebnow);
	nVector.push_back(b);
	return nVector;
}

void perkusyjne::saveTXT()
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
	w->Write("liczba_talerzy:{0};", l_talerzy);
	w->Write("liczba_bebnow:{0};\n", l_bebnow);
	w->Flush();
	w->Close();
}
