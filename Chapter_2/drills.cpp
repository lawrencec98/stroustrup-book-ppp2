#include "std_lib_facilities.h"

int main() {
    while (true) {
        double n1;
        double n2;
        
        cout << "Please enter two numbers: ";
        cin >> n1 >> n2;

        if (n1 == n2) { 
            cout << "the numbers are equal\n";
        }
        else if (abs(n1 - n2) < 1.0 / 100) {
            cout << "the numbers are almost equal\n";
        }
        else {
            if (n1 > n2) { 
                cout << "The smaller number is: " << n2 << "\n";
                cout << "The larger number is: " << n1 << "\n";
            }
            else if (n2 > n1) {
                cout << "The smaller number is: " << n1 << "\n";
                cout << "The larger number is: " << n2 << "\n";
            }
        }

        cout << "Please enter '|' if finished\n";
        char response;
        cin >> response;
        if (response == '|') break;
        else {};
    }
    return 0;
}
