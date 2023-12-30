/*
    Create an enumerated type for the Book class called Genre. Have the types be [fiction, nonfiction, periodical, biography, and children]. Give each book a Genre
    and make the appropriate changes to the Book constructor and member functions.
*/

#include "../std_lib_facilities.h"

bool is_ISBN(string ISBN);

enum class Genre {
    fiction, nonfiction, periodical, biography, children
};


class Book {
public:
    void check_out();
    void check_in();
    bool is_checked_out() {return checked_out;}
    const string get_ISBN() const {return ISBN;}
    const string get_title() const {return title;}
    const string get_author() const {return author;}
    const string get_date() const {return date;}
    const Genre get_genre() const {return genre;}
    Book(string ii, string tt, string aa, string dd, Genre gg);
private:
    string ISBN;
    string title;
    string author;
    string date;
    Genre genre;
    bool checked_out = false;
};


Book::Book(string ii, string tt, string aa, string dd, Genre gg)
    :ISBN{ii}, title{tt}, author{aa}, date{dd}, genre{gg}
{
    if(!is_ISBN(ISBN)) error("ERORR: invalid ISBN!\n");
}


void Book::check_out() {
    if(!is_checked_out()) {
        checked_out = 1;
        cout << "Success, you have checked this book out.\n";
    }
    else {
        error("ERROR: book is already checked out!\n");
    }
}


void Book::check_in() {
    if(is_checked_out()) {
        checked_out = 0;
        cout << "Success, you have checked this book in.\n";
    }
    else {
        error("ERROR: book was never checked out!\n");
    }
}


//helper functions
bool is_ISBN(string ISBN) {
    //assume is true
    for (int i = 0; i < 3; ++i) {
        if(!(ISBN[i] >= '0' && ISBN[i] <= '9')) {
            return false;
        }
    }

    if (!isalnum(ISBN[3])) {
        return false;
    }

    return true;
}


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
    os << "Genre: ";
    switch (thing.get_genre()) {
        case Genre::fiction:
            os << "Fiction";
            break;
        case Genre::nonfiction:
            os << "Non-Fiction";
            break;
        case Genre::periodical:
            os << "Periodical";
            break;
        case Genre::biography:
            os << "Biography";
            break;
        case Genre::children:
            os << "Children";
            break;
    }
    os << '\n';
    return os;
}