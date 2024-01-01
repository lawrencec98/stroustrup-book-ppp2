/*
    Write a program that reads the data from raw_temps.txt created in exercise 2 into a vector and then calculates the mean and median temperatures in your data set.
    Call this program temp_stats.cpp
*/

#include "../std_lib_facilities.h"
#define filename "raw_temps.txt"

int main() {
    ifstream ist {filename};
    if (!ist) error("ERROR: could not open input file.\n");
    int hour, temp;
    char ch;

    vector<int>temps;
    while (ist >> hour >> ch >> temp) {
        temps.push_back(temp);
    }

    cout << "raw temps are: ";
    for (int i : temps) {
        cout << i << ' ';
    }
    cout << '\n';

    double sum = 0;
    for (int i : temps) {
        sum += i;
    }
    double mean = sum / temps.size();
    cout << "mean temp is: " << mean << '\n';


    double median = 0;
    vector<int>sorted_temps = temps;
    sort(sorted_temps);
    if (temps.size() % 2 == 0) {
        median = 0.5*(sorted_temps[temps.size() / 2] + sorted_temps[temps.size() / 2 - 1]);
    }
    else if (temps.size() % 2 != 0) {
        median = sorted_temps[temps.size() / 2];
    }
    cout << "median temp is: " << median << '\n';
}