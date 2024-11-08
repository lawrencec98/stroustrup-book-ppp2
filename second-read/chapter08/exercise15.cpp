#include "../../std_lib_facilities.h"

int my_function(const int x) {
    return x + 1;
}

int main() {

    int x = 5;
    int y = my_function(x);

    std::cout << "y = " << y << std::endl;
}
