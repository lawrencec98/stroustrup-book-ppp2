/*
    This drill simply involves getting the sequence of versions of Date to work. For each version define a Date called today initialized to June 25, 1975. Then, define
    a Date called tomorrow and give it a value by copying today into it and increasing its day by one using add_day(). Finally, output today and tomorrow using a <<
    defined as in SECTION 9.8.
    Your check for a valid date may be very simple. Feel free to ignore leap years. However, don't accept a month that is not in the [1,12] range or day of the month 
    that is not in the [1,31] range. Test each version with at least one invalid date (e.g. 2004, 13, -5).

    drill01 => version 9.7.1
*/

#include "../std_lib_facilities.h"


class Date {
public:
    Date(int yy, int mm, int dd);
private:
    int y;
    Month m;
    int d;
};
