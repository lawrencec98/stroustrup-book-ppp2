#include "../../std_lib_facilities.h"

// 1.609 km == 1 mile

int main() {
    double distance_miles;
    std::cout << "Please enter a distance in miles: " << std::endl;
    std::cin >> distance_miles;

    double distance_km = distance_miles * 1.609;
    std::cout << distance_miles << " miles == " << distance_km << " km." << std::endl;
}