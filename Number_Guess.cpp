#include <iostream>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()

int main() {
    // Seed the random number generator - Himanshu Garg
    std::srand(static_cast<unsigned int>(std::time(0)));

    // Generate a random number between 1 and 100
    int secretNumber = std::rand() % 100 + 1;
    int userGuess;

    std::cout << "Guess the number (between 1 and 100): ";

    // Loop until the user guesses correctly
    while (true) {
        std::cin >> userGuess;

        if (userGuess < secretNumber) {
            std::cout << "Too low. Try again: ";
        } else if (userGuess > secretNumber) {
            std::cout << "Too high. Try again: ";
        } else {
            std::cout << "Congratulations! You guessed the correct number.\n";
            break;
        }
    }

    return 0;
}
