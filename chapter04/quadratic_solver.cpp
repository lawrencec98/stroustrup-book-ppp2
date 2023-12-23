#include "../std_lib_facilities.h"


int main() {

    double a;
    double b;
    double c;

    cout << "Enter a, b and c in your quadratic equation.\n";
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    // solution to quadratic equation
    // x = (-b +- sqrt(b^2 - 4ac)) / 2a

    // numerator calculations

    double numerator_plus = (-1 * b) + sqrt(b * b - (4 * a * c));
    double numerator_minus = (-1 * b) - sqrt(b * b - (4 * a * c));

    double x1 = numerator_plus / (2 * a);
    double x2 = numerator_minus / (2 * a);

    cout << "x1 = " << x1 << "\n" << "x2 = " << x2 << "\n";
}