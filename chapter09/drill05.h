#include "../std_lib_facilities.h"

enum class Month {
    jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

class Date {
public:
    int day() const {return d;};
    Month month() const {return m;};
    int year() const {return y;};
    Date(int yy, Month mm, int dd) :y{yy}, m{mm}, d{dd} {};
    void add_day(int n);
    void add_month(int n);
    void add_year(int n);
private:
    int y;
    Month m;
    int d;
};


void Date::add_day(int n) {
    if (d + n <= 31 && d + n>= 1) {
        d = d + n;
    }
    else {
        error("ERROR: invalid date");
    }
}


void Date::add_month(int n) {
    if (int(m) + n <= 12 && int(m) + n>= 1) {
       m = Month(int(m)+n);
    }
    else {
        error("ERROR: invalid date");
    }
}
