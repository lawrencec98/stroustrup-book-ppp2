/*
    Modify the exercise02.cpp to include a temperature suffix c for Celsius or f for Farenheit temperatures. Then modify exercise03.cpp to test each temperature, converting
    the Celsius readings to Farenheit before putting them into the vector. 
*/

#include "../std_lib_facilities.h"

struct Reading {
    int hour;
    int temperature;
};


void print_rawtemps(const vector<int>temps) {
    cout << "raw temps are: ";
    for (int i: temps) {
        cout << i << ' ';
    }
    cout << '\n';
}

void print_meantemps(const vector<int>temps) {
    double sum = 0;
    for (int i : temps) {
        sum += i;
    }
    double mean = sum / temps.size();
    cout << "mean temp is: " << mean << '\n';
}


void print_mediantemps(const vector<int>temps) {
    double median = 0;
    int middle = temps.size() / 2;
    vector<int>sorted_temps = temps;
    sort(sorted_temps);

    if (temps.size() % 2 == 0) {
        median = 0.5 * (sorted_temps[middle] + sorted_temps[middle - 1]);
    }
    else if (temps.size() % 2 != 0) {
        median = sorted_temps[middle];
    }
    cout << "median temp is: " << median << '\n';
}


int ctof(int temp) {
    double f;
    f = (temp * (9/5)) + 32;
    return f;
}