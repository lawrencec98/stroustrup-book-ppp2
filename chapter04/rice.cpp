#include "../std_lib_facilities.h"

/*
    Number of rice will double at each square progression, starting with 1.
    There are 64 squares in total.

    How many squares are required for:
        -1,000 grains of rice
        -1,000,000 grains of rice
        -1,000,000,000 grains of rice
*/

#define totalsquares 64

int main() {

    int square_id = 1;
    int grains_currentsquare = 1;
    int grains_so_far = 0;

    cout << "Square " << square_id << " ";
    cout << ": " << grains_currentsquare << " grains.\n";
    cout << "Total grains: " << grains_so_far << ".\n";

    while(grains_currentsquare + grains_so_far < 1000) {

        ++square_id;
        grains_so_far += grains_currentsquare;
        grains_currentsquare *= 2;

        cout << "Square " << square_id << " ";
        cout << ": " << grains_currentsquare << " grains.\n";
        cout << "Total of previous squares: " << grains_so_far << ".\n";
    }

}