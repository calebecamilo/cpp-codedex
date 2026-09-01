#include <iostream>

int main()
{
    double temp = 98.6;
    if (temp > 100){
        std::cout << "You have fever\n";
    }
    else
    {
        std::cout << "You do not have a fever.\n";   
    }
}