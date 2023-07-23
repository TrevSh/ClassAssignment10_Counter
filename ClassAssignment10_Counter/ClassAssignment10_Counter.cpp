#include <iostream>

int main()
{
    std::cout << "\tWelcome to my counter!\n";

    int countBack = 0;
    int countForward= 10;

    std::cout << "\tCounting Forward\n";
    for (int i = 0; i <= countForward; i++) {
        std::cout << i<<" ";
        if (i == 10)
            std::cout << "\n\n";
    }
    std::cout << "\tCounting Backward\n";
    for (int i = 10; i >= countBack; i--) {
        std::cout << i<<" ";
        if (i == 0) {
            std::cout << "\n\n";
        }
    }
    std::cout << "\tCounting by fives\n";
    for (int i = 0; i <= 50 ; i+=5) {
       std::cout << i <<" ";
       if (i == 50) {
           std::cout << "\n\n";
       }
    }

    std::cout << "\tCounting with Null Statement\n";
    int count = 0;
    for ( ;count < 10; ) {
        std::cout << count << " ";
        ++count;
        if (count == 10) {
            std::cout << "\n\n";
        }
    }
    std::cout << "\tCounting with nested for loop\n";
    const int ROWS = 5;
    const int COLUMNS = 3;
    for ( int i = 0; i<ROWS;++i){
        for (int j = 0; j < COLUMNS; j++) {
            std::cout << i << "," << j << " ";
        }
        if (count == 10) {
            std::cout << "\n\n";
        }
    }
    return 0;
}