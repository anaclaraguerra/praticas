#ifndef INF112_PRATICA6_H
#define INF112_PRATICA6_H

#include <iostream>
#include <cmath>

class SavingsAccount {
    private:
         int _savingsBalance;

    public:
        SavingsAccount(int savingsBalance);
        double calculateMonthlyInterest();
        static int _annualInterestRate;
        static int modifyInterestRate(int annualInterestRate);
};

#endif