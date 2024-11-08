/*
    Bulls and cows.
    1 bull == 1 digit right and in correct position
    1 cow == 1 digit right but not in correct position
*/

#include "../../std_lib_facilities.h"

int main()
{
    vector<int> digits = {1,2,3,4}; // must be between 0-9
    vector<int> guesses;
    int bulls = 0;
    int cows = 0;
    bool gameEnded = false;

    while(!gameEnded) {
        int guess1, guess2, guess3, guess4;
        
        std::cout << "Please enter four unique integers between 0 and 9: " << std::endl;

        try {
            std::cin >> guess1 >> guess2 >> guess3 >> guess4;

            if (guess1 < 0 || guess1 > 9 ||
                guess2 < 0 || guess2 > 9 ||
                guess3 < 0 || guess3 > 9 ||
                guess4 < 0 || guess4 > 9)
                {
                    throw std::runtime_error("Invalid number provided");
                }

            guesses.push_back(guess1);
            guesses.push_back(guess2);
            guesses.push_back(guess3);
            guesses.push_back(guess4);

            for (int i = 0; i < guesses.size(); ++i) 
            {
                for (int j = 0; j < digits.size(); ++j)
                {
                    if (guesses[i] == digits[j] && i == j) {
                        bulls++;
                    }
                    else if (guesses[i] == digits[j] && i != j) {
                        cows++;
                    } 
                    else continue;
                }
            }
            
            if (bulls == 4) {
                std::cout << "Correct! 4 bulls!" << std::endl;
                gameEnded = true;
            } else {
                std::cout << "Bulls = " << bulls << ", Cows = " << cows << std::endl;
                bulls = 0;
                cows = 0;
                guesses.clear();
            }
        }
        catch(std::runtime_error& e)
        {
            std::cout << e.what() << std::endl;
        }
    }
}