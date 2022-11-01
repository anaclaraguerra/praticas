#include "pratica6_ex2_estudante.h"
#include "pratica6_ex2_pessoa.h"
#include "pratica6_ex2_turma.h"

#include <iostream>
#include <string>



void f(Pessoa &pessoa) {
  std::cout << "Na funcao: " << pessoa.defina_meu_tipo() << std::endl;
}

int main() {
    Pessoa pessoa("Julio Reis.");

    Turma turma("10A", 2022);

    Estudante estudante("Jane Doe", 20180101, turma);
    std::cout << "\nA pessoa eh: " << pessoa.defina_meu_tipo() << std::endl;
    std::cout << "O estudante eh: " << estudante.defina_meu_tipo() << std::endl;
    std::cout << "\n";
    f(pessoa);
    f(estudante);

    std::cout << "\nano da turma = " << estudante.get_turma().get_ano() << std::endl; 
    std::cout << "\ncodigo da turma = " << estudante.get_turma().get_codigo() << std::endl; 


  return 0;
}