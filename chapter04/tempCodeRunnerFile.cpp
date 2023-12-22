#include "../std_lib_facilities.h"

//compute median

int main() {

    vector<double> temps;
    cout << "Please enter your temperature values: \n";
    for (double temp; cin >> temp;) {
        temps.push_back(temp);
    }

    sort(temps);
    double median_value;

    if (temps.size() % 2 == 0) {
        median_value = temps[temps.size()/2 - 1];
    }
    else {
        median_value = temps[(temps.size() - 1) / 2];
    }

    cout << "Median temperature: " << median_value;

    return 0;
}
