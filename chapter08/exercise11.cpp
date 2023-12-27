/*
    Write a function that finds the smallest and largest elements of a vector argument and also computes the mean and the median. Do not use global variables.
    Either return a struct containing the results or pass them back through the reference arguments. 
    Which of the two ways of returning sevaral result values do you prefer and why? NOTE: have not covered structs in this book yet so not sure about the struct suggestion.
*/
#include "../std_lib_facilities.h"


double calculate_smallest(vector<double> numbers);
double calculate_largest(vector<double> numbers);
void calculate_mean(vector<double> numbers, double &mean);
void calculate_median(vector<double> numbers, double &median);


int main() {
    vector<double> numbers;
    double value;
    cout << "Please enter your numbers (-1 to exit): ";
    while (cin >> value && value != -1) {
        numbers.push_back(value);
    }

    double smallest = calculate_smallest(numbers);
    double largest = calculate_largest(numbers);
    double mean, median;
    calculate_mean(numbers, mean);
    calculate_median(numbers, median);

    cout << "The smallest value is: " << smallest << ".\n";
    cout << "The largest value is: " << largest << ".\n";
    cout << "The mean value is: " << mean << ".\n";
    cout << "The median value is: " << median << ".\n";
}


double calculate_smallest(vector<double> numbers) {
    sort(numbers);
    double smallest = numbers.front();
    return smallest;
}


double calculate_largest(vector<double> numbers) {
    sort(numbers);
    double largest = numbers.back();
    return largest;
}


void calculate_mean(vector<double> numbers, double &mean) {
    double total = 0;
    for (int i = 0; i < numbers.size(); i++) {
        total += numbers[i];
    }

    mean = total / numbers.size();
}


void calculate_median(vector<double> numbers, double &median) {
    sort(numbers.begin(), numbers.end());
    if (numbers.size() % 2 == 0) {
        int left_mid = (numbers.size() / 2) - 1;
        median = (numbers[left_mid] + numbers[left_mid + 1]) / 2.0;
    }
    else {
        median = numbers[numbers.size()/2.0];
    }
}