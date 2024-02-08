/*
    Define a class Int having a single member of class int. Define constructors, assignment, and operator +,-,*,/ for it. Test it, and improve its design as needed
    (e.g. define operators << and >> for convenient I/O).
*/

#include <iostream>
#include <string>
#include <vector>


class Int {
    private:
        int value;

    public:
        Int() : value(0) {};
        Int(int vv) : value(vv) {};
        int get() const {return value;}
        void set(int vv) {value = vv;}

        Int operator+(const Int& rhs) const{
            return Int(value + rhs.value);
        }

        Int operator-(const Int& rhs) const{
            return Int(value - rhs.value);
        }

        Int operator*(const Int& rhs) const{
            return Int(value * rhs.value);
        }

        Int operator/(const Int& rhs) const{
            return Int(value / rhs.value);
        }
};


std::ostream& operator<<(std::ostream& cout, const Int& rhs) {
    cout << rhs.get();
    return cout;
}


std::istream& operator>>(std::istream& cin, Int& rhs) {
    int newval = 0;
    cin >> newval;
    rhs.set(newval);
    return cin;
}


int main() {
    Int my_number = 0;
    std::cin >> my_number;
    my_number = my_number + 10;
    std::cout << my_number;
}