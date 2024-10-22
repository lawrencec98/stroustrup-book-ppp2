#include "../../std_lib_facilities.h"


int main()
{
    vector<int>fibonacci;

    int val1=1, val2=1;
    fibonacci.push_back(val1);
    fibonacci.push_back(val2);

    while(true) {
        double temp = (double)val1 + val2;
        val1 = val2;
        val2 = temp;
        try {
            fibonacci.push_back(narrow_cast<int>(temp));
        }
        catch(...) {
            break;
        }
    }

    std::cout << "The largest fibnacci number that fits into an int is " << fibonacci[fibonacci.size()-1] << std::endl;
}