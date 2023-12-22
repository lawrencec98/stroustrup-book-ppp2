#include "../std_lib_facilities.h"

//Will only be passing by value here

double find_min(vector<double> distances);
double find_max(vector<double> distances);
double find_mean(vector<double> distances);


int main() {
    
    cout << "Please enter some distance values: ";

    vector<double> distances;
    for (double route; cin >> route;) {
        distances.push_back(route);
    }


    // Find minimum distance
    double minimum_distance, maximum_distance, mean_distance;
    minimum_distance = find_min(distances);
    maximum_distance = find_max(distances);
    mean_distance = find_mean(distances);

    cout << "The minimum distance between any two cities is: " << minimum_distance << "\n";
    cout << "The maximum distance between any two cities is: " << maximum_distance << "\n";
    cout << "The mean distance between cities is: " << mean_distance << "\n";
    return 0;
}


double find_min(vector<double> distances) {

    double current_min = distances[0];
    for (int i = 1; i < distances.size(); ++i) {
        if (distances[i] < current_min) {
            current_min = distances[i];
        }
    }

    return current_min;
}


double find_max(vector<double> distances) {

    double current_max = distances[0];
    for (int i = 1; i < distances.size(); ++i) {
        if (distances[i] > current_max) {
            current_max = distances[i];
        }
    }

    return current_max;
}


double find_mean(vector<double> distances) {

    double current_mean;
    double sum;
    double size = distances.size();

    for (int i = 0; i < distances.size(); ++i) {
        sum += distances[i];
    }

    current_mean = sum / size;

    return current_mean;
}