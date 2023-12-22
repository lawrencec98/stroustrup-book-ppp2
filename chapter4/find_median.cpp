#include "../std_lib_facilities.h"
#include "../find_median.cpp"

//compute median
//if there are two middle elements, the function calculates the middle of either side.

int main() {

    vector<double> temps;

    cout << "Please enter your temperature values: \n";

    for (double temp; cin >> temp;) {
        temps.push_back(temp);
    }

    sort(temps);

    double median_value;
    if (temps.size() % 2 == 0) {
        median_value = 0.5 * (temps[temps.size()/2] + temps[temps.size()/2 - 1]);
    }
    else {
        median_value = temps[temps.size()/ 2];
    }

    cout << "Median temperature: " << median_value << "\n";

    return 0;
}
