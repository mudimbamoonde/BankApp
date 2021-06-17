// BankApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <stdio.h>
#include "financetop.h"

int main()
    {
        double Balance = 87444;      
        int option;
        menu();
        do {
            std::cin >> option;
            if (option == 1) {
                system("cls");
                menu();
            }
            else if (option == 2) {
                Deposit(Balance);
                std::cin >> option;
            }
            else if (option == 3) {
                system("cls");
                std::cout << "Account Balance" << std::endl;
                std::cout << "Your Account Balance is: " << Balance << std::endl;
                std::cout << "Press 1 to go back Home: ";
                std::cin >> option;
            }
            else if (option == 4) {
                system("cls");
                std::cout << "Withdraw Amount" << std::endl;
                std::cout << "======================================================\nEnter Amount: ";
                double newBalance;
                std::cin >> newBalance;
                if (newBalance > Balance) {
                    std::cout << "You have insufficient Funds"<<std::endl;
                    std::cout << "Press 1 to go back Home: ";
                    std::cin >> option;
                }
                else {
                    Balance -= newBalance;

                    std::cout << "Your New Balance is: " << Balance << std::endl;
                    std::cout << "Press 1 to go back Home: ";
                    std::cin >> option;
                }
            }
            else {
                std::cout << "Wrong Option \n Press 1 for Main Menu: ";
                std::cin >> option;
           
            }

        
        } while (option != 5);
       

       
    }
