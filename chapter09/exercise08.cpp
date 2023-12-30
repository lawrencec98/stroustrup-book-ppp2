/*
    Create a Patron class for the library. The class will have a user's name, library card number, and library fees (if owed). Have functions that access this data,
    as well as a function to set the fee of the user. Have a helper function that returns a bool depending on whether or not the user owes a fee.
*/

#include "exercise08.h"


int main() {
    Patron lawrence {"lawrence", 123, 0.0};
    cout << lawrence.name() << " [" << lawrence.cardno() << "], owes: " << lawrence.fee() << '\n';

    lawrence.set_fee(0.1);

    if (owes_fee(lawrence)) {
        cout << "This person now owes you: " << lawrence.fee() << '\n';
    }
}