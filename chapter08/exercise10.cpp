/*
    Write a function maxv() that returns the largest element of a vector argument
*/

#include <iostream>
#include <vector>

int maxv(std::vector<int> myvec) {
    int max = 0;
    for (auto num : myvec) {
        if (num > max) {
            max = num;
        }
    }
    return max;
}

int main() {
    std::vector<int> myvec = {1,2,54,62,4,5,234,24,57,9,99,100,221,313,4,45,33,100};

    int max = maxv(myvec);
    std::cout << "the maximum value is: " << max << std::endl;
    return 0;
}