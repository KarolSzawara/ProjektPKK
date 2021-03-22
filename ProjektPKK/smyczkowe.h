#pragma once
#include "Instrument.h"
class strunowe :
    public Instrument
{
protected:
    unsigned l_strun;
public:
    strunowe();
    strunowe(std::string nazwa, double prize, unsigned szt, unsigned l_str);
    void virtual dodaj(std::string nazwa, double prize, unsigned szt, unsigned l_str);
    
};

class smyczkowe :
    public strunowe
{
private:
    float dl_gryfu;
public:
    smyczkowe();
    smyczkowe(std::string nazwa, double prize, unsigned szt, unsigned l_str, float gryf);
    void dodaj(std::string nazwa, double prize, unsigned szt, unsigned l_str, float gryf);
};

