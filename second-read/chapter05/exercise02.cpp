/*Find the errors in the code*/
#include "../../std_lib_facilities.h"

double ctok(double c)   //converts Celsius to Kelvin
{
    int k = c + 273.15;
    return int;
}

int main() 
{
    double c = 0;
    cin >> d;
    double k = ctok("c");
    Cout << k << '/n';
}

/*
    - 273.15 is a magic constant
    - declaring 'k' as an int means we will get narrowing
    - return value should be 'k' not int
    - expected return value is a double not int
*/

/*
    - streaming cin to 'd' which has not been declared
    - input paramter to ctok() is the wrong type
    - Cout should be cout
    - '/n' should be '\n'
*/