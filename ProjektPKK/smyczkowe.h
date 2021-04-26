#pragma once
#include "Instrument.h"
class strunowe :
    public Instrument
{
protected:
    unsigned l_strun;
public:
    ~strunowe() {}
    strunowe();
    strunowe(std::string nazwa, unsigned prize, unsigned szt, unsigned l_str);
    std::vector<std::shared_ptr<Instrument>> virtual dodaj( std::vector<std::shared_ptr<Instrument>> kontener);
    void virtual saveTXT();
};

class smyczkowe :
    public strunowe
{
private:
    float dl_gryfu;
public:
    ~smyczkowe() {}
    smyczkowe();
    smyczkowe(std::string nazwa, unsigned prize, unsigned szt, unsigned l_str, float gryf);
    std::vector<std::shared_ptr<Instrument>> dodaj(std::vector<std::shared_ptr<Instrument>> kontener);
    void saveTXT();
};

