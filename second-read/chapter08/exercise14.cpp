#include "../../std_lib_facilities.h"


vector<int> func(vector<string> vec) {

    vector<int> lengths;

    for (auto word : vec) {
        int length = word.length();
        lengths.push_back(length);
    }

    return lengths;
}

int main() {

    vector<string> words = {"test", "rhino", "programming", "hi", "rheinmetall", "lawrence", "bro"};
    vector<int> lengths = func(words);

    for (auto i : lengths) {
        std::cout << i << std::endl;
    }
}