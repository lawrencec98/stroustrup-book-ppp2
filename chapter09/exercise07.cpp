/*
    Create an enumerated type for the Book class called Genre. Have the types be [fiction, nonfiction, periodical, biography, and children]. Give each book a Genre
    and make the appropriate changes to the Book constructor and member functions.
*/

#include "exercise07.h"


int main() {
    Book ppp2{"444i","ppp2","stroustrup","04-06-2006", Genre::children};
    Book ppp3{"444i","ppp3", "stoustrup", "05-07-2007", Genre::fiction};
    cout << ppp2 << '\n';
    cout << ppp3 << '\n';
    
    if (ppp2 == ppp3) cout << "they have the same isbn\n";
    else cout << "they have different isbn\n";
}