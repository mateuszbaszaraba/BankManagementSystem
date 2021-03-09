//
// Created by Mateusz Baszaraba on 05/03/2021.
//

#include "Account.h"
#include <iostream>

void Account::createAccount()
{
    std::cout << "Enter index: ";
    std::cin >> index;
    std::cout << std::endl << "Enter name: ";
    std::cin >> name;
    std::cout << "Enter your balance: ";
    std::cin >> balance;
}

void Account::showAccount()
{
    std::cout << "Account Number: " << index << std::endl;
    std::cout << "Account Holder Name: " << name << std::endl;
    std::cout << "Balance: " << balance << "$" << std::endl;
}

void Account::modifyAccount()
{

}

void Account::dep(int b)
{
    balance += b;
}

void Account::draw(int d)
{
    balance -= d;
}

int Account::returnBalance()
{
    return balance;
}

int Account::returnIndex()
{
    return index;
}