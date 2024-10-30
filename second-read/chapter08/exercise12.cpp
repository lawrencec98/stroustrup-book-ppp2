#include "../../std_lib_facilities.h"


void func(vector<int>& vec, int& smallest, int& largest, int& median, float& mean) {

    smallest = vec[0];
    largest = vec[0];

    for (auto num : vec) {
        if (num < smallest) smallest = num;
        if (num > largest) largest = num;
    }

    int sum = 0;
    for (auto num : vec) {
        sum += num;
    }
    mean = sum / vec.size();

    sort(vec);
    int middle = vec.size() / 2;
    median = vec[middle];
}

int main() {

    vector<int> vec {3,5,7,33,12,20,1};
    int smallest;
    int largest;
    int median;
    float mean;

    func(vec, smallest, largest, median, mean);

    std::cout << "smallest = " << smallest << std::endl;
    std::cout << "largest = " << largest << std::endl;
    std::cout << "median = " << median << std::endl;
    std::cout << "mean = " << mean << std::endl;
}