#include <iostream>

int main()
{
    int number = 0;

    std::cout << "Guess the number: \n";
    std::cin >> number;

    while(number != 64){
        std::cout << "Wrong guess! Guess the number: \n";
        std::cin >> number;
    }
    
    std::cout << "You guessed it correctly! \n";
}