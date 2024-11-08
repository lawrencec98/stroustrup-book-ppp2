#include "../../std_lib_facilities.h"


class name_pairs {
public:
    void read_names();
    void read_ages();
    void print();

private:
    vector<std::string> m_names;
    vector<double> m_ages;
};

void name_pairs::read_names() {
    while(true) {
        string name;
        std:cin >> name;
        if (name != "!") {
            m_names.push_back(name);
        } else {
            return;
        }
    }
}

void name_pairs::read_ages() {
    if (m_names.empty()) {
        std::cerr << "ERROR! No names provided" << std::endl;
    } else {

        for (auto i : m_names) {
            double age;
            std::cout << "Please enter " << i << "'s " << "age: ";
            std::cin >> age;

            m_ages.push_back(age);
        }
    }
}

void name_pairs::print() {
    if (m_names.empty() || m_ages.empty()) {
        std::cerr << "ERROR! No names or ages to print" << std::endl;
    } else {
        for (int i = 0; i < m_names.size(); ++i) {
            std::cout << m_names[i] << ", " << m_ages[i] << std::endl;
        }
    }
}

int main() {

    name_pairs object;
    std::cout << "enter names" << std::endl;
    object.read_names();
    std::cout << "enter ages" << std::endl;
    object.read_ages();

    std::cout << "Pairs of names, ages are: " << std::endl << std::endl;
    object.print();
}