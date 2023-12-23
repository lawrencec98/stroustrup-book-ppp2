#include "../std_lib_facilities.h"

bool isprime(vector<int>& primes, int number);  // Pass the vector by reference

int main() {

    vector<int> primes;
    primes.push_back(2);  // Use push_back to add elements to the vector
    int number = 1;

    for (number = 3; number <= 100; ++number) {  // Start from 3 since 2 is already in primes

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

bool isprime(vector<int>& primes, int number) {
    // check if number is in the list of primes
    for (int i = 0; i < primes.size(); ++i) {
        if (number % primes[i] == 0) {
            return false;  // number is divisible by an existing prime, not a prime
        }
    }
    return true;  // number is not divisible by any existing primes, is a prime
}
