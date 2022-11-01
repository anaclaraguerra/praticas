#include "pratica6_ex2_estudante.h"

#include <iostream>
#include <string>

Estudante::Estudante(std::string nome, int matricula, Turma turma):
    Pessoa(nome), _matricula(matricula), _turma(turma) {}

int Estudante::get_matricula() const {
    return this->_matricula;
}

std::string Estudante::defina_meu_tipo() const {
    return "Sou um estudante";
}

Turma Estudante::get_turma(){
    return this->_turma;
}

void Estudante::set_turma(Turma turma){
    this->_turma = turma;

}