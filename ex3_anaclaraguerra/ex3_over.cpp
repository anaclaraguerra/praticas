#include <string>
#include <iostream>

#include "ex3_over.h"

OvernightPackage::OvernightPackage(std::string nome, std::string endereco, unsigned int kg, unsigned int precokg, unsigned int taxakg):
    Package(nome, endereco, kg, precokg), _taxakg(taxakg) {}


double OvernightPackage::CalculateCost() const{
    return _kg * _precokg * _taxakg;
}