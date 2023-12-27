/*
    Write a program that converts from Celsius to Kelvin, and vice versa.
*/

#include "../std_lib_facilities.h"

double ctok(double temp)
{
    temp = temp + 273.15;
    if (temp < 0) cerr << "ERROR: Celsius value below absolute zero.\n";
    return temp;
}


double ktoc(double temp) 
{
    temp = temp - 273.15;
    if (temp < 273.15) cerr << "ERROR: Kelvin value below absolute zero.\n";
    return temp;
}

int main()
{
    cout << "Enter the temperature you want to convert and its units (c/k): ";
    double temp = 0;
    char unit;
    cin >> temp >> unit;

    switch (unit) {

        case 'c':
            temp = ctok(temp);
            break;
        case 'k':
            temp = ktoc(temp);
            break;
    }

    cout << temp << '\n';
}