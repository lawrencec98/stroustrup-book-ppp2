/*
    Using the code and discussion in SECTION 10.4, prompt the user to input seven (x,y) pairs. As the data is entered, store it in a vector of Points called original_points.
*/

#include "drill02.h"
#define number_of_points 7


int main() {

    vector<Point> original_points;
    cout << "Please enter seven (x,y) pairs:\n";

    Point input_point;
    for (int i = 0; i < number_of_points; ++i) {
        cin >> input_point;
        original_points.push_back(input_point);
    }
}