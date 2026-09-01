#include <iostream>

int main(){
    std::cout << "Welcome to Trivia!\n";

    int answer1;
    int answer2;
    std::string answer3;

    std::cout << "Q1) What is the name of the world's longest river? \n\n";
    std::cout << "1) Missouri River\n";
    std::cout << "2) Nile\n";
    std::cout << "3) Amazon River\n";
    std::cout << "4) Yangtze River\n";

    std::cin >> answer1;

    if(answer1 == 2) {
        std::cout << "You got it correct!\n";
    }
    else{
        std::cout << "I'm sorry...\n";
    }

    std::cout << "Q2) How many bones are in the human body?\n\n";
    std::cout << "1) 92\n";
    std::cout << "2) 150\n";
    std::cout << "3) 206\n";
    std::cout << "4) 10\n";

    std::cin >> answer2;

    if(answer2 == 3) {
        std::cout << "You got it correct!\n";     
    }
    else{
        std::cout << "I'm sorry...\n";
    }

    std::cout << "Q3) What food never spoils?\n\n";
    std::cout << "Type you answer: \n";

    std::cin >> answer3;

    if (answer3 == "honey" || answer3 == "Honey") {
    std::cout << "You got it correct!\n";
    } 
     else {
    std::cout << "I'm sorry...\n";
    }

  std::cout << "You completed the quiz!\n";
}