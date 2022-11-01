#ifndef TWO_H
#define TWO_H

#include <iostream>
#include <string>

#include "ex3_package.h"

class TwoDayPackage : public Package{
    private:
        unsigned int _taxa;
    public:
        TwoDayPackage(std::string nome, std::string endereco, unsigned int kg, unsigned int precokg, unsigned int taxa);
        virtual double CalculateCost() const override;
};

#endif