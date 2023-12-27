/*
    Create a program to find all the prime numbers between 1 and 100. One way to do this is to write a function that will check if a number is prime. Then write a loop that 
    goes from 1 to 100, checks each number to see if its a prime, and stores each prime found in a vector. Write another loop that lists the primes you found. Consider 2
    the first prime.
*/

#include "../std_lib_facilities.h"


bool isprime(vector<int> primes, int number);

int main() {

    vector<int> primes;
    primes.push_back(2);

    for (int number = 3; number <= 100; ++number) {

        if (isprime(primes, number)) {
            primes.push_back(number);
        }
    }

    for (int i = 0; i < primes.size(); ++i) {
        cout << primes[i] << " ";
    }
    cout << "\n";
    return 0;
}


bool isprime(vector<int> primes, int number) {

    //check if number is in the list of primes
    for (int i = 0; i < primes.size(); ++i) {

        if (number % primes[i] == 0) {
            return false;
        }
    }

    return true;
}