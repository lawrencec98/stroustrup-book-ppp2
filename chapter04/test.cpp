#include "../std_lib_facilities.h"

int main() {

    // has to choose random index from 0 - 2
    std::time_t seed = std::time(nullptr);

    // Use a simple algorithm to generate a pseudo-random number
    seed = (seed * 1103515245 + 12345) & 0x7fffffff;

    // Generate a random number between 0 and 2
    int random_number = seed % 3;

    cout << random_number;
}