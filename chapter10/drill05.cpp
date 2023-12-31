/*
    Close the ofstream and then open an ifstream for mydata.txt. Read the data from mydata.txt and store it in a new vector called processed_points. 
*/

#include "drill05.h"


int main() {

    cout << "Which file would you like to read?\n";
    string infile;
    cin >> infile;
    ifstream ist {infile};
    if(!ist) error("ERROR: could not open input file.\n");

    cout << "What is the output filename?\n";
    string outfile;
    cin >> outfile;
    ofstream ost {outfile};
    if(!ost) error("ERROR: could not open output file.\n");

    vector<Point> processed_points;
    Point temp;
    while(ist >> temp) {
        processed_points.push_back(temp);
    }

    for(auto pt : processed_points) {
        ost << pt.x << ',' << pt.y << '\n';
    }

    return 0;
}