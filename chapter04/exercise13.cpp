/*
    Create a program to find all the prime numbers between 1 and 100. There is a classic method for doing this, called the "Sieve of Eratosthenes". Write your program using this
    method.
*/

#include "../std_lib_facilities.h"


int main() {

    int max;
    cout << "Find all primes from 1 to what number?: ";
    cin >> max;

    // initialise a vector of trues
    vector<int> primes(max + 1, 1);

    // set 0 and 1 to false, because they are not prime numbers
    primes[0] = primes[1] = 0;

    for (int i = 2; i < sqrt(max); i++) {
        if (primes[i] == 1) {
            for (int j = i * i; j < max; j += i) { 
                primes[j] = 0;
            }
        }
    }

    // print out our new vector of primes
    
    for (int i = 2; i < max; i++) {
        if (primes[i] == 1) {
            cout << i << " ";
        }
    }

    cout << "\n";

    return 0;

}