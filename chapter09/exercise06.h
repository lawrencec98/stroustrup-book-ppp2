/*
    Add operators for the Book class. Have the == operator checked whether the ISBN numbers are the same for two books. Have != also compare the ISBN numbers.
    Have a << print out the title, author and ISBN on separate lines.
*/

#include "exercise05.h"


bool operator == (Book &a, Book &b) {
    return a.get_ISBN() == b.get_ISBN();
}


bool operator != (Book &a, Book &b) {
    return !(a==b);
}


ostream &operator << (ostream &os, const Book &thing) {
     
    os << "Title: " << thing.get_title() << '\n';
    os << "Author: " << thing.get_author() << '\n';
    os << "ISBN: " << thing.get_ISBN() << '\n';
    return os;
}