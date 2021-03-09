//
// Created by Mateusz Baszaraba on 05/03/2021.
//

#ifndef BANK_MANAGEMENT_ACCOUNT_H
#define BANK_MANAGEMENT_ACCOUNT_H


class Account {
    static int accountTotalNumber;

    int index;
    char name[40];
    int balance;


public:
    void createAccount();
    void showAccount();
    void modifyAccount();
    void dep(int);
    void draw(int);
    int returnIndex();
    int returnBalance();
};


#endif //BANK_MANAGEMENT_ACCOUNT_H
