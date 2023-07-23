// ClassAssignment10_Counter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "\tWelcome to my counter!\n";

    int countBack = 0;
    int countForward= 10;

    for (int i = 0; i <= countForward; i++) {
        std::cout << i<<" ";
        if (i == 10)
            std::cout << "\n\n";
    }
    for (int i = 10; i >= countBack; i--) {
        std::cout << i<<" ";
        if (i == 0) {
            std::cout << "\n\n";
        }
    }
    for (int i = 0; i <= 50 ; i+=5) {
       std::cout << i <<" ";
       if (i == 50) {
           std::cout << "\n\n";
       }
    }
}