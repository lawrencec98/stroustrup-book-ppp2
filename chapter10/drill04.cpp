/*
    Open an ofstream and output each point to a file named mydata.txt. On Windows, we suggest the .txt suffix to make it easier to look at the data with an ordinary
    text editor (such as WordPad).
*/

#include "drill04.h"

#define filename "mydata.txt"

int main() {

    cout << "Please enter two (x,y) points: \n";
    vector<Point> points;
    for (int i = 0; i < 7; ++i) {
        Point pt;
        cin >> pt;
        points.push_back(pt);
    }

    ofstream ost {filename};
    if(!ost) error("ERROR: can't open output file",filename);
    for (int i = 0; i < points.size(); ++i) {
        ost << '(' << points[i].x << ',' << points[i].y << ')' << '\n';
    }
}