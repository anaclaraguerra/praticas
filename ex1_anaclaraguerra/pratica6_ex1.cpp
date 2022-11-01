#include <iostream>
#include "pratica6_ex1.h"

int SavingsAccount::_annualInterestRate = 3.00;

SavingsAccount::SavingsAccount(int savingsBalance):
    _savingsBalance(savingsBalance) {}


double SavingsAccount::calculateMonthlyInterest() {
    _savingsBalance += (_savingsBalance*_annualInterestRate)/12;
    return _savingsBalance;
}


int SavingsAccount::modifyInterestRate(int annualInterestRate) {
    _annualInterestRate = annualInterestRate;
    return _annualInterestRate;
}