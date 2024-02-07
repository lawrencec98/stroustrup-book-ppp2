/*
    Modify class Link from §17.9.3 to be a template with the type of value as the template argument. Then redo Exercise 13 from Chapter 17 with Link<God>.

    Exercise 13:
        Modify the Link class to hold a value of a struct God. struct God should have members of type string: name, mythology, vehicle, and weapon. For example,
        God{"Zeus", "Greek", "", "lightning"} and God{"Odin", "Norse", "Eight-legged flying horse called Sleipner", "Spear called Gungnir"}.
        Write a print_all() function that lists gods with their attributes one per line. Add a member function add_ordered() that places its new element
        in its correct lexicographical position. Using the links with the values of type God, make a list of gods from three mythologies; then move the elements
        (gods) from that list to three lexicographically ordered lists - one for each mythology.
*/

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

template<typename S>
struct Link {
    private:
        S value;
        Link* prev;
        Link* succ;
    
    public:
        Link(const S& v, Link* p = nullptr, Link* s = nullptr)
            :value(v), prev(p), succ(s) {}
        void print_all() const; 

};

struct God {
    God(const string& nn, const string& mm, const string& vv, const string& ww)
        : name(nn), mythology(mm), vehicle(vv), weapon(ww) {}
    string name;
    string mythology;
    string vehicle;
    string weapon;
};


template<typename S>
void Link<S>::print_all() const{
    cout << value;
}


int main() {
    God Zeus{"Zeus", "Greek", "", "lightning"};
}