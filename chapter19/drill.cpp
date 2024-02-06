#include <string>
#include <iostream>
#include <vector>

template<typename T>
struct S {
    S() : val(T()) {};
    S(T vv) : val(vv) {};
    T& get();
    const T& get() const;
    S& operator=(const T&);
    T& read_val(T& v);

    private:
        T val;
};


template<typename T>
T& S<T>::get() {
    return val;
}

template<typename T>
const T& S<T>::get() const{
    return val;
}

template<typename T>
S<T>& S<T>::operator=(const T& rhs) {
    val = rhs;
    return *this;
}

template<typename T>
T& S<T>::read_val(T& v) {
    std::cin >> v;
    return v;
}


int main() {

    S<int> s_int(1);
    S<char> s_char('a');
    S<double> s_double(5.6);
    S<std::string> s_string ("hello");
    std::vector<int> vint {2,4,6};
    S<std::vector<int>> s_vector(vint);

    std::cout << "s_int = " << s_int.get() << std::endl;
    std::cout << "s_char = " << s_char.get() << std::endl;
    std::cout << "s_double = " << s_double.get() << std::endl;
    std::cout << "s_string = " << s_string.get() << std::endl;
    for(int i = 0; i < s_vector.get().size(); i++) {
        std::cout << "s_vector.val[" << i << "] = " << s_vector.get()[i] << std::endl;
    }
}