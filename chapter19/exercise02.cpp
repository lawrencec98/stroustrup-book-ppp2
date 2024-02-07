/*
    Write a template function that takes a vector<T> and a vector<U> as arguments and returns the sum of all vt[i]*vu[i].
*/

#include <iostream>
#include <vector>


template<typename T, typename U>
double f(const std::vector<T>& vt, const std::vector<U>& vu) {
    
    double sum = 0;
    for(int i = 0; i < (vt.size()>vu.size() ? vt.size():vu.size()); i++) {
        std::cout << "the sum is currently = " << sum << std::endl;
        double calc = static_cast<double>(vt[i]) * static_cast<double>(vu[i]);
        sum += calc;
        std::cout << "vt[i]*vu[i] = " << calc << std::endl;
    }
    return sum;
}


int main() {

    std::vector<int> v1 {1,2,3,4,5};
    std::vector<float> v2 {2,4,6,8,10};

    double sum = f(v1,v2);
    std::cout << "the final sum = " << sum << std::endl; 
}