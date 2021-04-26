#pragma once
#include "Instrument.h"
class perkusyjne :
    public Instrument
{
private:
    unsigned l_talerzy;
    unsigned l_bebnow;
public:
    perkusyjne();
    perkusyjne(std::string a, unsigned prize, unsigned szt, unsigned tal, unsigned beb);
    void dodaj( std::vector<std::shared_ptr<Instrument>> kontener);
};

