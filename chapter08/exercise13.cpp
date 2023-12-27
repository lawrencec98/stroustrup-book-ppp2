/*
    Write a function that takes a vector<string> argument and returns a vector<int> containing the number of characters in each string. Also find the longest and shortest string
    and the lexicographically first and last string. How many separate functions would you use for these taks? Why?
*/

#include "../std_lib_facilities.h"

vector<int> char_count(vector<string> &strings);
vector<string> sortby_length(const vector<string> &strings, const vector<int> &char_counts);
vector<string> sortby_alpha(const vector<string> &strings);


int main() {

    vector<string> strings = {"shower", "towel", "dry", "shampoo", "hair", "clothes", "sink", "toothbrush"};
    vector<int> char_counts = char_count(strings);

    vector<string> sortedby_length = sortby_length(strings, char_counts);
    string longest = sortedby_length.back();
    string shortest = sortedby_length.front();

    vector<string> sortedby_alpha = sortby_alpha(strings);
    string first = sortedby_alpha.front();
    string last = sortedby_alpha.back();

    cout << "longest: " << longest << ", shortest: " << shortest << '\n';
    cout << "alphabetically first: " << first << ", alphabetically last: " << last << '\n';
}


vector<int> char_count(vector<string> &strings) {
    vector<int> char_vector;
        for (string word : strings) { 
            char_vector.push_back(word.size());
        }
    return char_vector;
}


vector<string> sortby_length(const vector<string> &strings, const vector<int> &char_counts) {
    vector<string> sorted_strings = strings;
    vector<int> sorted_counts = char_counts;

    for (int i = 0; i < strings.size(); ++i) {
        for (int j = 0; j < strings.size() -i-1; ++j) {
            if (sorted_counts[j] > sorted_counts[j+1]) {
                swap(sorted_counts[j], sorted_counts[j+1]);
                swap(sorted_strings[j], sorted_strings[j+1]);
            }
        }
    }
    return sorted_strings;
}


vector<string> sortby_alpha(const vector<string> &strings) {
    vector<string> sorted_strings = strings;
    sort(sorted_strings.begin(), sorted_strings.end());
    return sorted_strings;
}