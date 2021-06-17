#include <iostream>
#include <stdio.h>
#include "financetop.h"

void menu() {
    std::cout << " 1.Home\n 2.Deposit \n 3.Balance \n 4.Withdraw \n 5.Exit" << std::endl;
}
void Deposit(double Balance) {
    system("cls");
    std::cout << "Deposit Amount" << std::endl;
    std::cout << "======================================================\nEnter Amount: ";
    double newBalance;
    std::cin >> newBalance;
    Balance += newBalance;

    std::cout << "Your New Balance is: " << Balance << std::endl;
    std::cout << "Press 1 to go back Home: ";

}