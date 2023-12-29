/*
    This drill simply involves getting the sequence of versions of Date to work. For each version define a Date called today initialized to June 25, 1975. Then, define
    a Date called tomorrow and give it a value by copying today into it and increasing its day by one using add_day(). Finally, output today and tomorrow using a <<
    defined as in SECTION 9.8.
    Your check for a valid date may be very simple. Feel free to ignore leap years. However, don't accept a month that is not in the [1,12] range or day of the month 
    that is not in the [1,31] range. Test each version with at least one invalid date (e.g. 2004, 13, -5).

    drill01 => version 9.4.1
*/

#include "../std_lib_facilities.h"


struct Date {
    int y;
    int m;
    int d;
};


Date add_day(Date current_date, int n) {

    Date new_date = current_date;
    new_date.d += n;
    if (new_date.d <= 31 && new_date.d >= 1) {
        return new_date;
    }
    else {
        error("ERROR: invalid date");
    }
    
}


int main() {

    Date today;
    today.y = 1975;
    today.m = 06;
    today.d = 30;

    Date tomorrow = today;
    tomorrow = add_day(tomorrow, 1);

    cout << "today: " << today.y << ", " << today.m << ", " << today.d << '\n';
    cout << "tomorrow: " << tomorrow.y << ", " << tomorrow.m << ", " << tomorrow.d << '\n';
}