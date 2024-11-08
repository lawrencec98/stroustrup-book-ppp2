#include "../../std_lib_facilities.h"

int main() {
    vector<double> distances;
    std::cout << "Please enter distances,of type double: " << std::endl;
    for (double distance; std::cin >> distance;) {
        distances.push_back(distance);
    }

    // calculate total distance
    double sum_distances = 0;
    for (double x : distances) {
        sum_distances += x;
    }
    std::cout << "Total distance = " << sum_distances << std::endl;

    // calculate the smallest and largest distance
    sort(distances);
    std::cout << "Smallest distance = " << distances[0] << std::endl;
    std::cout << "Largest distance = " << distances[distances.size() - 1] << std::endl;
}