#include <iostream>
#include <string>

#include "ex3_package.h"

Package::Package(std::string nome, std::string endereco, unsigned int kg, unsigned int precokg):
    _nome(nome), _endereco(endereco), _kg(kg), _precokg(precokg) {}


double Package::CalculateCost() const{
    return _kg * _precokg;
}
