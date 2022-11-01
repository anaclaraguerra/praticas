#include <string>
#include <iostream>

#include "ex3_over.h"
#include "ex3_package.h"
#include "ex3_two.h"

int main(){
    Package pac("Pacote 1", "Rua Passos, 71", 20, 15);
    TwoDayPackage two(" Pacote 2", "Av. PH Holfs , s/n", 5, 15, 10);
    OvernightPackage over(" Pacote 3", "Av. Santa Rita , 110", 50, 15, 15);

    std::cout << pac.CalculateCost()<< std::endl;
    std::cout << two.CalculateCost()<< std::endl;
    std::cout << over.CalculateCost()<< std::endl;


    return 0;
}