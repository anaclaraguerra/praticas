#include <iostream>
#include "pratica6_ex1.h"

int main(){
    SavingsAccount saver1 = SavingsAccount(2000);
    SavingsAccount saver2 = SavingsAccount(3000);

    std::cout << saver1.calculateMonthlyInterest() << "\n";
    std::cout << saver2.calculateMonthlyInterest() << "\n";

    SavingsAccount::_annualInterestRate = 4.0;

    std::cout << saver1.calculateMonthlyInterest() << "\n";
    std::cout << saver2.calculateMonthlyInterest() << "\n";


    return 0;
}