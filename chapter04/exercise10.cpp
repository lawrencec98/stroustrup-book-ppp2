/*
    Write a program that plays the game "Rock, Paper, Scissors". Use a switch-statement to solve this exercise. Also the machine should give random answers. Real randomness
    is too hard to provide just now, so just build a vector with a sequence of values to be used as "the next value". If you build the vector into the program, it will always 
    play the same game, so maybe you should let the user enter some values. Try variations to make it less easy for the user to guess which move the machine will make next.
*/

#include "../std_lib_facilities.h"
#include <ctime>

/*
    In this version of rock paper scissors, the books tells us that 'real' randomness is not the goal for now. We will use a vector and pick one of its elements for our answer.
    Book wants us to use a switch statement.

    Pseudocode: 
        -Ask for user choice
            -Stored as a string
        -Generate computer choice
            -Doesn't matter what type I use, as long as its comparable against a string?
        -Compare choices
        -Print winner

    The cheat here was that I included the ctime library, and used a common random number generating algorithm I found online.
*/

char computer_pick(vector<char> choices);

int main() {

    cout << "Play Rock, Paper, Scissors against this computer!\n";

    vector<char> rps = {'r', 'p', 's'};

    string user_choice = "";
    cout << "Choose Rock, Paper, or Scissors!: ";

    while(cin >> user_choice) {

        char computer_choice = computer_pick(rps);

        if(user_choice == "Rock") { 
            switch(computer_choice) {
                case 'r':
                    cout << "\tComputer chose Rock!\n";
                    cout << "\tTie!\n";
                    break;
                case 'p':
                    cout << "\tComputer chose Paper.\n";
                    cout << "\tComputer wins!\n";
                    break;
                case 's':
                    cout << "\tComputer chose Scissors.\n";
                    cout << "\tPlayer wins!\n";
                    break;
            }
        }
        else if(user_choice == "Paper") {
            switch(computer_choice) {
                case 'r':
                    cout << "\tComputer chose Rock!\n";
                    cout << "\tPlayer wins!\n";
                    break;
                case 'p':
                    cout << "\tComputer chose Paper.\n";
                    cout << "\tTie!\n";
                    break;
                case 's':
                    cout << "\tComputer chose Scissors.\n";
                    cout << "\tComputer wins!\n";
                    break;
            }
        }
        else if(user_choice == "Scissors") {
            switch(computer_choice) {
                case 'r':
                    cout << "\tComputer chose Rock!\n";
                    cout << "\tComputer wins!\n";
                    break;
                case 'p':
                    cout << "\tComputer chose Paper.\n";
                    cout << "\tPlayer wins!\n";
                    break;
                case 's':
                    cout << "\tComputer chose Scissors.\n";
                    cout << "\tTie!\n";
                    break;
            }
        }
        else {
            cout << "\tThat's not a valid choice!\n";
            break;
        }
        
    cout << "Choose Rock, Paper, or Scissors!: ";

    }

}


char computer_pick(vector<char> choices) {

    int random_number;
    // has to choose random index from 0 - 2
    std::time_t seed = std::time(nullptr);

    // Use a simple algorithm to generate a pseudo-random number
    seed = (seed * 1103515245 + 12345) & 0x7fffffff;

    // Generate a random number between 0 and 2
    random_number = seed % 3;

    return choices[random_number];
}