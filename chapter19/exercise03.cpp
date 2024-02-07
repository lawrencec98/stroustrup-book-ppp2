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
        
};