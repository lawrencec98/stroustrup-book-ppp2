#include "std_lib_facilities.h"

int main() {

double initial_number;
double largest_sofar;
double smallest_sofar;
cout << "Please enter your starting number: ";
cin >> initial_number;
largest_sofar = smallest_sofar = initial_number;

    while (true) {
        
        double n1;
        string unit;

        cout << "Please enter a number (or '|' if finished): ";
        cin >> n1 >> unit;

        if (n1 < smallest_sofar) {
            smallest_sofar = n1;
            cout << n1 << " " << unit << " is the smallest so far\n";
        }
        else if(n1 > largest_sofar) {
            largest_sofar = n1;
            cout << n1 << " " << unit << " is the largest so far\n";
        }

        cout << "quit? '|'";
        char response;
        cin >> response;
        if (response == '|') break;
        else {};
    }
    return 0;
}
