/*
    Create a Patron class for the library. The class will have a user's name, library card number, and library fees (if owed). Have functions that access this data,
    as well as a function to set the fee of the user. Have a helper function that returns a bool depending on whether or not the user owes a fee.
*/

#include "exercise07.h"

class Patron {
public:
    string name() const {return user_name;}
    double cardno() const {return user_cardno;}
    double fee() const {return user_fee;}
    void set_fee(double n);
    Patron(string nn, double cc, double ff);
private:
    string user_name;
    double user_cardno;
    double user_fee = 0.0;
};


Patron::Patron(string nn, double cc, double ff) :user_name{nn}, user_cardno{cc}, user_fee{ff}  {}

void Patron::set_fee(double n) {
    user_fee = n;
}

//helper functions
bool owes_fee(Patron person) {
    return person.fee() != 0.0;
}