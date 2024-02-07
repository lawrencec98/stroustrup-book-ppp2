/*
    Write a template function f() that adds the elements of one vector<T> to the elements of another; for example, f(v1,v2) should do v1[i]+=v2[i] for each element
    of v1.
*/

#include <iostream>
#include <vector>


template<typename T>
void f(std::vector<T>&v1, const std::vector<T>v2) {
    
    if(v1.size() > v2.size()) {
        std::cout << "error: v1 cannot be larger than v2" << std::endl;
        return;
    }
    else if(v1.size() < v2.size()) {
        std::cout << "warning: resized v1 as it had less elements than v2" << std::endl;
        v1.resize(v2.size());
    }

    for(int i = 0; i < v1.size(); i++) {
        v1[i] += v2[i];
    }
}


int main() {

    std::vector<int> v1 {1,2,3,4,5};
    std::vector<int> v2 {2,4,6,8};

    f(v1,v2);
    for(int i = 0; i < v1.size(); i++) {
        std::cout << v1[i] << std::endl; 
    }
}