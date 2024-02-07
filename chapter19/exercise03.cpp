/*
    Write a template class Pair that can hold a pair of values of any type. Use this to implement a simple symbol table like the one we used in the calculator (§7.8).
*/

#include <iostream>
#include <vector>


template<typename T, typename U>
class Pair {
    private:
        T t_data;
        U u_data;
    
    public:
        Pair();
        Pair(T tt, U uu) : t_data(tt), u_data(uu) {};
        T gett();
        U getu();
};


template<typename T, typename U>
T Pair<T, U>::gett() {
    return t_data;
}


template<typename T, typename U>
U Pair<T, U>::getu() {
    return u_data;
}


int main() {
    Pair pi("pi", 3.14159);
    std::cout << pi.gett() << " = " << pi.getu() << std::endl;
}