/*
Scissors cuts Paper.
Paper covers Rock.
Rock crushes Lizard.
Lizard poisons Spock.
Spock smashes Scissors.
Scissors decapitate Lizard.
Lizard eats Paper.
Paper disproves Spock.
Spock vaporizes Rock.
Rock crushes Scissors.
*/

#include <iostream>
#include <stdlib.h>

int main() {
    
    // Live long and prosper
    srand (time(NULL));
    int computer = rand() % 3 + 1;
    int user = 0;

    std::cout << "====================\n";
    std::cout << "rock paper scissors!\n";
    std::cout << "====================\n";

    std::cout << "1) ✊\n";
    std::cout << "2) ✋\n";
    std::cout << "3) ✌️ \n";

    std::cout << "=> ";
    std::cin >> user;

    if (computer == user) {
        std::cout << "Tie!\n";
        std::cout << "Try Again!\n";
    }
    else if (computer == 1 && user == 3) {
        std::cout << "Rock crushes Scissors.\n";
        std::cout << "Computer won!\n";
    }
    else if (computer == 1 && user == 2) {
        std::cout << "Paper covers Rock.\n";
        std::cout << "User won!\n";
    }
    else if (computer == 2 && user == 3) {
        std::cout << "Scissors cuts Paper.\n";
        std::cout << "User won!\n";
    }
    else if (computer == 2 && user == 1) {
        std::cout << "Paper covers Rock.\n";
        std::cout << "Computer won!\n";
    }
    else if (computer == 3 && user == 2) {
        std::cout << "Scissors cuts Paper.\n";
        std::cout << "Computer won!\n";
    }
    else if (computer == 3 && user == 1) {
        std::cout << "Rock crushes Scissors.\n";
        std::cout << "User won!\n";
    }

    return 0;

}