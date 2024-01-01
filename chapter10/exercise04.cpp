/*
    Modify the exercise02.cpp to include a temperature suffix c for Celsius or f for Farenheit temperatures. Then modify exercise03.cpp to test each temperature, converting
    the Celsius readings to Farenheit before putting them into the vector. 
*/

#include "../std_lib_facilities.h"
#include "exercise04.h"
#define filename "raw_temps2.txt"


void generate_file() {
    //part 1 from exercise02
    ofstream ost {filename};
    Reading pt;
    
    for (int i = 0; i < 50; ++i) {
        pt.hour = i;
        pt.temperature = rand() % 100;
        ost << pt.hour << ',' << pt.temperature << ',' << ((pt.temperature%2 == 0) ? 'c':'f') << '\n';
    }
}


int main() {

    generate_file();
// part 2
    ifstream ist {filename};
    if (!ist) error("ERROR: could not open input file.\n");
    int hour, temp;
    char ch1;
    char ch2;
    char ch3;

    vector<int>temps;
    while (ist >> hour >> ch1 >> temp >> ch2 >> ch3) {
        if(ch3 == 'c') temps.push_back(ctof(temp));
        else temps.push_back(temp);
    }

    print_rawtemps(temps);
    print_meantemps(temps);
    print_mediantemps(temps);
}