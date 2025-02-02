// NUMBER GUESSING GAME
// This program generates a random number and asks the user to guess it.
// It provides feedback on whether the guess is too high or too low until the user guesses correctly.
// The game supports multiple rounds.

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0)); // Seed random number generator
    char playAgain;
    
    std::cout << "==============================" << std::endl;
    std::cout << "       NUMBER GUESSING GAME   " << std::endl;
    std::cout << "==============================" << std::endl;
    
    do {
        int target = std::rand() % 100 + 1; // Random number between 1 and 100
        int guess;
        int attempts = 0; // Extra attribute to count attempts
        
        std::cout << "Guess a number between 1 and 100: ";
        
        while (true) {
            std::cin >> guess;
            attempts++;
            
            if (guess > target) {
                std::cout << "Too high! Try again: ";
            } else if (guess < target) {
                std::cout << "Too low! Try again: ";
            } else {
                std::cout << "Congratulations! You guessed the right number in " << attempts << " attempts." << std::endl;
                break;
            }
        }
        
        std::cout << "Do you want to play again? (y/n): ";
        std::cin >> playAgain;
        
    } while (playAgain == 'y' || playAgain == 'Y');
    
    std::cout << "Thanks for playing!" << std::endl;
    return 0;
}
number
