#include <iostream>
#include <string>

#include "ex3_two.h"

TwoDayPackage::TwoDayPackage(std::string nome, std::string endereco, unsigned int kg, unsigned int precokg, unsigned int taxa):
    Package(nome, endereco, kg, precokg), _taxa(taxa) {}

double TwoDayPackage::CalculateCost() const{
    return (_kg * _precokg) + _taxa;
}