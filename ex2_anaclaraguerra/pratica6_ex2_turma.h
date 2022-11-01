#ifndef TURMA_H
#define TURMA_H

#include <string>
#include <iostream>

class Turma{
    private:
        std::string _codigo;
        int _ano;
    public:
        Turma(std::string codigo, int ano);
        int get_ano();
        void set_ano(int ano);
        std::string get_codigo();
        void set_codigo(std::string codigo);


};

#endif