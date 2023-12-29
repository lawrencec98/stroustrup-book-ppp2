/*
    Design and implement a Name_pairs class holding (name, age) pairs where name is a string and age is a double. Represent that as a vector<string> (called name), and
    a vector<double> (called age) member. Provide an input operation read_names() that reads a series of names. Provide a read_ages() operation that prompts the user
    for an age for each name. Provide a print() operation that prints out the (name[i], age[i]) pairs (one per line) in the order determined by the name vector. Provide a
    sort() operation that sorts the name vector in alphabetical order and reorganizes the age vector to match. Implement all "operations" as member functions. Test the
    class.
*/

#include "../std_lib_facilities.h"
#include "exercise02.h"

int main() {

    Name_pairs catapangs;
    catapangs.read_names();
    catapangs.read_ages();
    Name_pairs catapangs_sorted = catapangs;
    catapangs_sorted.sort();
    cout << "User's inputs:" << '\n';
    catapangs.print();
    cout << "SORTED ALPHABETICALLY:" << '\n';
    catapangs_sorted.print();
}