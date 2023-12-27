/*
    Create a vector of Fibonacci numbers and print them using the function from exercise 2. To create the vector, write a function, fibonacci(x,y,v,n), where integers
    x and y are ints, v is an empty vector<int>, and n is the number of elements to put into v. The fibonacci function should make such a sequence starting with its x and 
    y arguments.
*/

#include "exercise03.h"
#include "../std_lib_facilities.h"

void fibonacci(int &x, int &y, vector<int> &my_vector, int n) {
// function will find first n digits of a fibonacci series, starting from x and y, then stores it in my_vector
// feel like this could definitely be done with recursion
    my_vector.push_back(x);
    my_vector.push_back(y);
    int next_number = 0;
    for (int i = 2; i < n; ++i) {
        next_number = x + y;
        my_vector.push_back(next_number);
        x = y;
        y = next_number;
    }
}

int main() {

    int x = 0;
    int y = 0;
    int n = 0;
    vector<int> my_vector;
    cout << "This program gives you n digits of a fibonacci sequence, starting from two give numbers x and y.\n";
    cout << "First provide x and y, respectively: ";
    cin >> x >> y;
    cout << "Next, how many digits do you want in your sequence?: ";
    cin >> n;

    fibonacci(x,y,my_vector,n);
    string exit_label = "Your fibonacci sequence is ";
    print(exit_label,my_vector);
    cout << '\n';
}