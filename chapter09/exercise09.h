#include "../std_lib_facilities.h"


typedef struct {
    string title;
    string author;
    bool checkedOut = false;
}Book;


typedef struct {
    string name;
}Patron;


typedef struct {
    Book book;
    Patron patron;
} Transaction;


class Library {
public:
    void addBook(Book book);
    void addPatron(Patron patron);
    void checkoutBook(Book book, Patron patron);
    void printTransactions();
private:
    vector<Book> lib_books;
    vector<Patron> lib_patrons;
    vector<Transaction> lib_transactions;
};


void Library::addBook(Book book) {
    lib_books.push_back(book);
}

void Library::addPatron(Patron patron) {
    lib_patrons.push_back(patron);
}

void Library::checkoutBook(Book book, Patron patron) {
    bool book_found = false;
    bool patron_found = false;
    bool patron_hasbook = false;
    
    for (int i = 0; i < lib_books.size(); ++i) {
        if (lib_books[i].author == book.author && lib_books[i].title == book.title) {
            book_found = true;
        }
        
    }
    for (int i = 0; i < lib_patrons.size(); ++i) {
        if (lib_patrons[i].name == patron.name) {
            patron_found = true;
        }
    }
    for (int i = 0; i < lib_transactions.size(); ++i) {
        if (lib_transactions[i].patron.name == patron.name) {
            patron_hasbook = true;
        }
    }

    if (patron_found == false || book_found == false) {
        std::cout << "ERROR: Could not find book or patron" << std::endl;
    }
    else if (patron_hasbook == true) {
        std::cout << "ERROR: Patron already has a book checked out" << std::endl;
    }
    else {
        book.checkedOut = true;
        Transaction new_transaction {book, patron};
        lib_transactions.push_back(new_transaction);
    }
}

void Library::printTransactions() {
    for (const auto& transaction : lib_transactions) {
        std::cout << '(' << transaction.book.title << ", " << transaction.patron.name << ')' << std::endl;
    }
}