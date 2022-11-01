#include "pratica6_ex2_pessoa.h"

#include <iostream>
#include <string>

Pessoa::Pessoa(std::string nome):
  _nome(nome) {}

std::string Pessoa::get_nome() const {
  return this->_nome;
}

std::string Pessoa::defina_meu_tipo() const {
  return "Sou uma pessoa!\n";
}