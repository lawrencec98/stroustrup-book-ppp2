/*
    Write a program that creates a file of data in the form of the temperature Reading type defined in SECTION 10.5. For testing, fill the file with at least 50
    "temperature readings". Call this program store_temps.cpp and the file it creates raw_temps.txt.
*/

#include "../std_lib_facilities.h"
#define ofilename "raw_temps.txt"

struct Reading {
    int hour;
    double temperature;
};


int main() {

    ofstream ost {ofilename};
    Reading pt;
    
    for (int i = 0; i < 50; ++i) {
        pt.hour = i;
        pt.temperature = rand() % 100;
        ost << pt.hour << ',' << pt.temperature << '\n';
    }
}