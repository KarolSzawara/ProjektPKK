#pragma once
#include "Instrument.h"
class dmuchane :
    public Instrument
{
private:
    unsigned l_przyciskow;
public:
    dmuchane();
    dmuchane(std::string a, unsigned prize, unsigned szt, unsigned przy);
    void dodaj(std::string a, unsigned prize, unsigned szt, unsigned przy);
};

