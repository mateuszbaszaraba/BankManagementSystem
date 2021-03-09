#include <iostream>

void add_account();

int main() {

    char option;

    do
    {
        std::cout << "\tMAIN MENU" << std::endl;
        std::cout << "\t01. NEW ACCOUNT" << std::endl;
        std::cout << "\t02. DEPOSIT" << std::endl;
        std::cout << "\t03. WITHDRAW" << std::endl;
        std::cout << "\t04. BALANCE ENQUIRY" << std::endl;
        std::cout << "\t05. ALL ACCOUNT HOLDER LIST" << std::endl;
        std::cout << "\t06. CLOSE AN ACCOUNT" << std::endl;
        std::cout << "\t07. MODIFY AN ACCOUNT" << std::endl;
        std::cout << "\t08. EXIT" << std::endl;
        std::cout << "\tSelect Your Option (1-8) ";
        std::cin >> option;
        switch(option)
        {
            case '1':
                add_account();
                break;
        }

    } while(option!='8');

    return 0;
}

void add_account();
