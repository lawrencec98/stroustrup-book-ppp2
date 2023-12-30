/*
    This exercise and the next few require you to design and implement a Book class, such as you can imagine as part of software for a library. Class Book should have members
    for the ISBN, title, author, and copyright date. Also store data on whether or not the book is checked out. Create functions for returning those data values. Create
    functions for checking a book in and out. Do simple validation of data entered into a Book; for example, accept ISBNs only of the form n-n-n-x where n is an integer
    and x is a digit or a letter. Store an ISBN as a string.
*/

#include "exercise05.h"


int main() {
    cout << "Welcome to this virtual library!\n";
    cout << "To create a new book enter: ISBN, title, author, copyright date\n";

    Book ppp2{"444i","pp2","stroustrup","04-06-2006"};
    ppp2.check_out();
    cout << ppp2.is_checked_out() << '\n';
    ppp2.check_in();
    cout << ppp2.is_checked_out() << '\n';
}