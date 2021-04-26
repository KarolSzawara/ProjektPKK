#pragma once
#include "Instrument.h"
class perkusyjne :
    public Instrument
{
private:
    unsigned l_talerzy;
    unsigned l_bebnow;
public:
    ~perkusyjne() {}
    perkusyjne();
    perkusyjne(std::string a, unsigned prize, unsigned szt, unsigned tal, unsigned beb);
    std::vector<std::shared_ptr<Instrument>> dodaj( std::vector<std::shared_ptr<Instrument>> kontener);
    void saveTXT();
};

