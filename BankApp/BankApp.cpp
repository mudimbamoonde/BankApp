// BankApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
void menu(){
    std::cout <<"1.Home\n2.Deposit \n3.Balance \n4.Withdraw \n5.Exit" <<std::endl;
}
    int main()
    {
        double Balance=87444;
        double Deposit;
        int option;
        menu();

        std::cin >> option;

        if (option==2) {
            system("cls");
            std::cout << "Deposit Amount"<<std::endl;
            std::cout << "======================================================\nEnter Amount: ";
            double newBalance;
            std::cin >> newBalance;
            Balance += newBalance;

            std::cout << "Your New Balance is: " << Balance << std::endl;
        }
        else if (option == 3) {
            system("cls");
            std::cout << "Account Balance" << std::endl;
            std::cout << "Your Account Balance is: " << Balance << std::endl;
        }
        else if (option == 4) {
            system("cls");
            std::cout << "Withdraw Amount" << std::endl;
            std::cout << "======================================================\nEnter Amount: ";
            double newBalance;
            std::cin >> newBalance;
            Balance -= newBalance;

            std::cout << "Your New Balance is: " << Balance << std::endl;
        }

    }
