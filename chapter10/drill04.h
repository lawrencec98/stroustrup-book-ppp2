/*
    Open an ofstream and output each point to a file named mydata.txt. On Windows, we suggest the .txt suffix to make it easier to look at the data with an ordinary
    text editor (such as WordPad).
*/

#include "../std_lib_facilities.h"


struct Point {
    double x = 0;
    double y = 0;
};


istream &operator >>(istream &is, Point &p) {
    double x,y;
    char ch1, ch2, ch3;
    is >> ch1 >> x >> ch2 >> y >> ch3;
    if (!is) return is;
    if (ch1 != '(' || ch2 != ',' || ch3 != ')') {
        is.clear(ios_base::failbit);
        return is;
    }

    p.x = x;
    p.y = y;
    return is;
}


ostream &operator <<(ostream &os, Point &p) {
    cout << '(' << p.x << ',' << p.y << ')';
    return os; 
}