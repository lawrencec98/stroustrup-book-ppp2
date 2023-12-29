/*
    This drill simply involves getting the sequence of versions of Date to work. For each version define a Date called today initialized to June 25, 1975. Then, define
    a Date called tomorrow and give it a value by copying today into it and increasing its day by one using add_day(). Finally, output today and tomorrow using a <<
    defined as in SECTION 9.8.
    Your check for a valid date may be very simple. Feel free to ignore leap years. However, don't accept a month that is not in the [1,12] range or day of the month 
    that is not in the [1,31] range. Test each version with at least one invalid date (e.g. 2004, 13, -5).

    drill01 => version 9.4.1
*/

#include "../std_lib_facilities.h"

struct Date{
    int y;  // year
    int m;  // month in year
    int d;  // day of month
    int day() const {return d;}
    int month() const {return m;}
    int year() const {return y;}
    Date (int y, int m, int d);
    Date add_day(int n);
};


Date::Date(int yy, int mm, int dd)
    :y{yy}, m{mm}, d{dd}
{}


Date Date::add_day(int n) {
    if (d + n < 31 && d + n > 1) {
        d += n;
        return *this;
    }
    else {
        error("ERROR: invalid date.\n");
        return *this;
    }
}


ostream& operator << (ostream& os, const Date& d) {
    // Implementation of this function is taken from the book, as it has not yet been explained
    return os << '(' << d.year()
                << ',' << d.month()
                << ',' << d.day() << ')';
}

istream& operator >> (istream& is, Date&dd) {
    // Implementation of this function is taken from the book, as it has not yet been explained
    int y, m, d;
    char ch1, ch2, ch3, ch4;
    is >> ch1 >> y >> ch2 >> m >> ch3 >> d >> ch4;
    if (!is) return is;
    if (ch1 != '(' || ch2 !=',' || ch3 != ',' || ch4 != ')') {
        is.clear(ios_base::failbit);
    return is;
    }
}


int main() {
    Date today {1975,06,01};
    Date tomorrow = today;
    tomorrow = tomorrow.add_day(1);

    cout << "today: " << today << ", tomorrow: " << tomorrow << '\n';
}