#include "../std_lib_facilities.h"

//I will use 'm' as the comparison unit
//Understand I could use pointers here, but I have not reached that point yet in the book so I will hold off.
double process_num(double num, string unit);

double sum = 0;
int numbers_count = 0;
vector<double> vector_inputs;


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

            if(processed_num != -1 && processed_num < smallest_sofar) {
                smallest_sofar = processed_num;
                cout << num << " " << unit << " is the smallest so far.\n";
            }
            else if(processed_num != -1 && processed_num > largest_sofar) {
                largest_sofar = processed_num;
                cout << num << " " << unit << " is the largest so far.\n";
            }
        }

    cout << "Largest: " << largest_sofar << " m" << "\n";
    cout << "Smallest: " << smallest_sofar << " m" << "\n";
    cout << "Sum of values: " << sum << " m" << "\n";
    cout << "Count of values: " << numbers_count << "\n";
    sort(vector_inputs);

    for (int i = 0; i < vector_inputs.size(); i++) {
        cout << vector_inputs[i] << ", ";
    }
    cout << "\n";
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
        cout << "Error: invalid units\n";
        return -1;
    }

    sum += num;
    numbers_count++;

    if (num != -1) {
    vector_inputs.push_back(num);
    }
    
    return num;
}