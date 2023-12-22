#include <iostream>

int guessNumber(int low, int high) {
    // Base case: if the range is narrowed down to one number, that's the guess
    if (low == high) {
        std::cout << "Is your number " << low << "? (Enter 'y' for yes, 'n' for no): ";
        char response;
        std::cin >> response;

        if (response == 'y') {
            std::cout << "Great! I guessed your number.\n";
        } else {
            std::cout << "Oops! Something went wrong.\n";
        }

        return low; // Return the guessed number
    }

    // Recursive case: make a guess in the middle of the current range
    int guess = (low + high) / 2;

    std::cout << "Is your number less than or equal to " << guess << "? (Enter 'y' for yes, 'n' for no): ";
    char response;
    std::cin >> response;

    if (response == 'y') {
        // If the number is less than or equal to the guess, narrow the range to the lower half
        return guessNumber(low, guess);
    } else {
        // If the number is greater than the guess, narrow the range to the upper half
        return guessNumber(guess + 1, high);
    }
}

int main() {
    std::cout << "Welcome to the Number Guessing Game!\n";
    std::cout << "Pick a number between 1 and 100, and I'll try to guess it.\n";

    int userNumber = guessNumber(1, 100);

    std::cout << "Your number is: " << userNumber << "\n";

    return 0;
}
