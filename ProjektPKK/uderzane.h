#pragma once
#include "smyczkowe.h"
class uderzane :
    public strunowe
{
private:
    unsigned l_kl;
    
public:
    uderzane();
    ~uderzane() {}
    uderzane(std::string nazwa, unsigned prize, unsigned szt, unsigned l_str, unsigned klaw);
    std::vector<std::shared_ptr<Instrument>> dodaj(std::vector<std::shared_ptr<Instrument>> kontener);
    void saveTXT();
};

