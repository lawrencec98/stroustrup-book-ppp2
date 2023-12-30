/*
    Add operators for the Book class. Have the == operator checked whether the ISBN numbers are the same for two books. Have != also compare the ISBN numbers.
    Have a << print out the title, author and ISBN on separate lines.
*/

#include "exercise06.h"


int main() {
    Book ppp2{"444i","ppp2","stroustrup","04-06-2006"};
    Book ppp3{"444i","ppp3", "stoustrup", "05-07-2007"};
    cout << ppp2 << '\n';
    cout << ppp3 << '\n';
    
    if (ppp2 == ppp3) cout << "they have the same ibsn\n";
    else cout << "they have different isbn\n";
}