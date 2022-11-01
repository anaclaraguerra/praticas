#ifndef OVER_H
#define OVER_H

#include <string>
#include <iostream>

#include "ex3_package.h"

class OvernightPackage : public Package{
    private:
        double _taxakg;
    public:
        OvernightPackage(std::string nome, std::string endereco, unsigned int kg, unsigned int precokg, unsigned int taxakg);
        virtual double CalculateCost() const override;

};

#endif