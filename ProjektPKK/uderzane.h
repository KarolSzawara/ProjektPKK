#pragma once
#include "smyczkowe.h"
class uderzane :
    public strunowe
{
private:
    unsigned l_kl;
protected:
    uderzane();
    uderzane(std::string nazwa, double prize, unsigned szt, unsigned l_str, unsigned klaw);
    void dodaj(std::string nazwa, double prize, unsigned szt, unsigned l_str, unsigned klaw);

};

