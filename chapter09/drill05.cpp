/*
    This drill simply involves getting the sequence of versions of Date to work. For each version define a Date called today initialized to June 25, 1975. Then, define
    a Date called tomorrow and give it a value by copying today into it and increasing its day by one using add_day(). Finally, output today and tomorrow using a <<
    defined as in SECTION 9.8.
    Your check for a valid date may be very simple. Feel free to ignore leap years. However, don't accept a month that is not in the [1,12] range or day of the month 
    that is not in the [1,31] range. Test each version with at least one invalid date (e.g. 2004, 13, -5).

    drill01 => version 9.7.4
*/

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

int main() {
    Date today {1975,Month::jun,25};
    Date tomorrow = today;
    Date next_month = today;
    tomorrow.add_day(1);
    next_month.add_month(1);


    cout << "today: " << today.year() << ", " << int(today.month()) << ", " << today.day() << '\n';
    cout << "tomorrow: " << tomorrow.year() << ", " << int(tomorrow.month()) << ", " << tomorrow.day() << '\n';
    cout << "next month: " << next_month.year() << ", " << int(next_month.month()) << ", " << next_month.day() << '\n';
}

