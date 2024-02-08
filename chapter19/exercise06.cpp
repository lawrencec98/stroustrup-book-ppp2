/*
    Repeat exercise05, but with a class Number<T> where T can be any numeric type. Try adding % to Number and see what happens when you try to use % for
    Number<double> and Number<int>.
*/

#include <iostream>


template<typename T>
class Number {
    public:
        Number() : value(0.0) {};
        Number(T vv) : value(vv) {};
        T get() const {return value;};
        Number& operator=(T& rhs) {value = rhs; return *this;};

        Number operator+(const Number& rhs) const {
            return Number(value + rhs.value);
        }

        Number operator-(const Number& rhs) const{
            return Number(value - rhs.value);
        }

        Number operator*(const Number& rhs) const{
            return Number(value * rhs.value);
        }

        Number operator/(const Number& rhs) const{
            return Number(value / rhs.value);
        }

        Number operator%(const Number& rhs) const{
            return Number(value % rhs.value);
        }
    
    private:
        T value;
};

template<typename T>
std::ostream& operator<<(std::ostream& cout, const Number<T>& rhs) {
    cout << rhs.get();
    return cout;
}


template<typename T>
std::istream& operator>>(std::istream& is, const Number<T>& rhs) {
    is >> rhs.get();
    return is;
}


int main() {
    Number mynum = 6;
    mynum = mynum % 10;
    std::cout << mynum << std::endl;
}