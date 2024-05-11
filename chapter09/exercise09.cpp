/*
    Create a Library class. Include vectors of Books and Patrons. Include a struct called Transaction. Have it include a Book, a Patron.
    Make a vector of Transactions. Create functions to add books to the library, add patrons to the library, and check out books. Whenever a user checks out a book, have
    the library make sure that both the user and the book are in the library. If they aren't, report an error. Then check to make sure that the user doesn't already 
    have a book. If the user does, report an error. If not, create a Transaction, and place it in the vector of Transactions. Also write a function that will return a vector
    that contains the names of all the Patrons who owe fees.
*/

#include "exercise09.h"

int main() {

    Library mylibrary;

    Book book1 {"book1", "author1"};
    Book book2 {"book2", "author2"};
    Book book3 {"book3", "author3"};

    mylibrary.addBook(book1);
    mylibrary.addBook(book2);
    mylibrary.addBook(book3);

    Patron patron1 {"patron1"};
    Patron patron2 {"patron2"};

    mylibrary.addPatron(patron1);
    mylibrary.addPatron(patron2);

    std::cout << "transactions before: ";
    mylibrary.printTransactions();
    std::cout << std::endl;

    mylibrary.checkoutBook(book1, patron1);
    mylibrary.checkoutBook(book3, patron1);

    std::cout << "transactions after: ";
    mylibrary.printTransactions();
    std::cout << std::endl;
}