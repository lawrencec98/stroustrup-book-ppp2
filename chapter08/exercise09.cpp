/*
    Write a function that given two vector<double>s price and weight computes a value (an index) that is the sum of all price[i] * weight[i]. 
    Make sure to have weight.size() == price.size().
*/

#include "../std_lib_facilities.h"


void calculate_index(vector<double> price, vector<double> weight, double &index) {

    if (price.size() != weight.size()) {
        error("ERROR: size of price != size of weight\n");
    }
    
    const int size = price.size();

    for (int i = 0; i < size; ++i) {
        index += price[i] * weight[i];
    }
}


int main() {

    vector<double> price;
    vector<double> weight;
    double value;
    cout << "Please enter some prices (-1 when finished): ";
    while(cin >> value && value != -1) {
        price.push_back(value);
    }
    cout << "Now please enter the weight, respectively (-1 when finished): ";
    while(cin >> value && value != -1) {
        weight.push_back(value);
    }

    double index = 0;
    calculate_index(price, weight, index);
    cout << "The index for your list of prices and weights is: " << index << ".\n";
}