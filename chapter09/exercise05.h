/*
    This exercise and the next few require you to design and implement a Book class, such as you can imagine as part of software for a library. Class Book should have members
    for the ISBN, title, author, and copyright date. Also store data on whether or not the book is checked out. Create functions for returning those data values. Create
    functions for checking a book in and out. Do simple validation of data entered into a Book; for example, accept ISBNs only of the form n-n-n-x where n is an integer
    and x is a digit or a letter. Store an ISBN as a string.
*/

#include "../std_lib_facilities.h"
bool is_ISBN(string ISBN);

class Book {
public:
    void check_out();
    void check_in();
    bool is_checked_out() {return checked_out;}
    const string get_ISBN() const {return ISBN;}
    const string get_title() const {return title;}
    const string get_author() const {return author;}
    const string get_date() const {return date;}
    Book(string ISBN, string title, string author, string date, Genre genre);
private:
    string ISBN;
    string title;
    string author;
    string date;
    Genre genre;
    bool checked_out;
};


Book::Book(string ISBN, string title, string author, string date, Genre genre)
    :ISBN{ISBN}, title{title}, author{author}, date{date}, genre{genre}
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