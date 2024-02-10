/*
    1. Define an array of ints with the ten elements {0,1,2,3,4,5,6,7,8,9}
    2. Define a vector<int> with those ten elements
    3. Define a list<int> with those ten elements
    4. Define a second array, vector, and list, each initialized as a copy of the first array, vector, and list, respectively.
    5. Increase the value of each element in the array by 2; increase the value of each element in the vector by 3; increase the vale of
        each element in the list by 5.
    6. Write a simple copy() operation.

        template<typename iter1, typename iter2>
            //requires Input_iterator<iter1>() && Output_iterator<iter2>)()
        iter2 copy(iter1 f1, iter1 e1, iter2 f2);

    that copies [f1,e1) to [f2,f2+(e1-f1)) and returns f2+(e1-f1) just like the standard library copy function. Note that if f1==e1 the
    sequence is empty, so that there is nothing to copy.
    7. Use your copy() to copy the array into the vector and to copy the list into the array.
    8. Use the standard library find() to see if the vector contains the value 3 and print out its position if it does; use find() to see if
    the list contains the value 27 and print out its position if it does. The "position" of the first element is 0, the position of the second
    element is 1, etc. Note that if find() returns the end of the sequence, the value wasn't found.
*/

#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <algorithm>


template<typename iter1, typename iter2>
iter2 my_copy(iter1 f1, iter1 e1, iter2 f2) {
    while(f1 != e1) {
        *f2 = *f1;
        ++f1;
        ++f2;
    }
    return f2;
}


int main() {

    int array_ints1[10] = {0,1,2,3,4,5,6,7,8,9};
    std::vector<int> vec_ints1 {3,4,5,6,7,8,9,10,11,12};
    std::list<int> list_ints1 {5,6,7,8,9,10,11,12,13,14};

    my_copy(&array_ints1[0],&array_ints1[10],vec_ints1.begin());
    my_copy(list_ints1.begin(), list_ints1.end(), array_ints1);


    //tests
    
    std::cout << "vec_ints1:" << std::endl;
    for(auto i: vec_ints1) {
        std::cout << i << std::endl;
    }
    
    std::cout << "array_ints1:" << std::endl; 
    for(auto i: array_ints1) {
        std::cout << i << std::endl;
    }

    std::cout << "check for value '3' in vec_ints1:" << std::endl;
    auto vec_ints1_iter = std::find(vec_ints1.begin(), vec_ints1.end(), 3);
    if(vec_ints1_iter != vec_ints1.end()) {
        std::cout << "value 3 found in index " << vec_ints1_iter - vec_ints1.begin() << std::endl;
    } else {
        std::cout << "no value 3 in vec_ints1." << std::endl;
    }

    std::cout << "check for value '27' in array_ints1: " << std::endl;
    auto array_ints1_iter = std::find(&array_ints1[0], &array_ints1[10], 27);
    if(array_ints1_iter != &array_ints1[10]) {
        std::cout << "value 27 found in index " << array_ints1_iter - &array_ints1[0] << std::endl;
    } else {
        std::cout << "no value 27 in array_ints1." << std::endl;
    }
}