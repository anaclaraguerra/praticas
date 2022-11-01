#ifndef ESTUDANTE_H
#define ESTUDANTE_H

#include "pratica6_ex2_pessoa.h"
#include "pratica6_ex2_turma.h"
#include <string>

class Estudante : public Pessoa {
    private:
        const int _matricula;
        Turma _turma;
    public:
        Estudante(std::string nome, int matricula, Turma turma);
        int get_matricula() const;
        virtual std::string defina_meu_tipo() const override;
        Turma get_turma();
        void set_turma(Turma turma);

};

#endif