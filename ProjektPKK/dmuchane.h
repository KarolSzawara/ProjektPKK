#pragma once
#include "Instrument.h"
class dmuchane :
    public Instrument
{
private:
    unsigned l_przyciskow;
public:
    ~dmuchane() {}
    dmuchane();
    dmuchane(std::string a, unsigned prize, unsigned szt, unsigned przy);
    std::vector<std::shared_ptr<Instrument>> dodaj( std::vector<std::shared_ptr<Instrument>> kontener);
    void saveTXT();
};

