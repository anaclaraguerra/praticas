#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>
#include <iostream>

class Package{
    protected:
        std::string _nome;
        std::string _endereco;
        unsigned int _kg;
        unsigned int _precokg;

    public:
        Package(std::string nome, std::string endereco, unsigned int kg, unsigned int precokg);
        virtual double CalculateCost() const;




    
};

#endif