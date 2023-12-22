#include "../std_lib_facilities.h"


int guess_number(int low, int high);


int main() {

    int guess;
    char response;

    cout << "Think of a number between 1 and 100. I will try to guess it within seven questions!\n";
    guess = guess_number(1, 100);

    cout << "Is your number " << guess << "? (y/n) ";
    cin >> response;
    if (response == 'y') {

        cout << "\n" << "Great! I guessed correctly!\n";
    }

}


int guess_number(int low, int high) {

    if (low == high) {
        return high;
    }

    int middle_value = (low + high) / 2;
    char response;

    cout << "Is your number greater than " << middle_value << "? (y/n)";
    cin >> response;
    if (response == 'y') {
        return guess_number(middle_value + 1, high);
    }
    else if (response == 'n') {
        return guess_number(low, middle_value);
    }
    else {
        return -1;
    }

}
