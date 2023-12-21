#include "std_lib_facilities.h"

//I will use 'm' as the comparison unit
double process_num(double num, string unit);

int main() {

double largest_sofar, smallest_sofar;
double init_num;
string init_unit;
cout << "Please enter your starting number and unit: ";
cin >> init_num >> init_unit;
largest_sofar = smallest_sofar = process_num(init_num, init_unit);

    while(true) {

        double num;
        string unit;

        cout << "Please enter a number and its units (or | to quit):\t";
        cin >> num >> unit;

        if (cin.fail()) {
            cout << "invalid inputs\n";
            break;
        }

        double processed_num = process_num(num, unit);

        if(processed_num < smallest_sofar) {
            smallest_sofar = num;
            cout << num << " " << unit << " is the smallest so far.\n";
        }
        else if(processed_num > largest_sofar) {
            largest_sofar = num;
            cout << num << " " << unit << " is the largest so far.\n";
        }
    }
}


double process_num(double num, string unit) {

    if (unit == "cm") {
        num *= 0.01;
    }
    else if (unit == "in") {
        num *= 0.0254;
    }
    else if (unit == "ft") {
        num *= 0.3048;
    }
    else if (unit == "m") {
        
    }
    else {
        cout << "Error: not valid units\n";
        exit(1);
    }
    return num;
}