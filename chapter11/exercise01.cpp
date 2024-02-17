/*
    Write a program that reads a text file and converts its input to all lower case, producing a new file.
*/

#include <iostream>
#include <fstream>
#include <string>

#define infile "input01.txt"
#define outfile "output01.txt"


class FileOpenError : public std::runtime_error {
public:
    FileOpenError(const std::string& error_message) : std::runtime_error(error_message) {}
};


int main() {
    
    std::fstream ifs {infile};
    std::ofstream ofs {outfile};

    try {
        if (!ifs) throw FileOpenError("error cannot open file");

    }
    catch (const FileOpenError& e) {
        std::cout << e.what() << std::endl;
    }

    std::string buffer;
    while (ifs >> buffer) {
        buffer[0] = tolower(buffer[0]);
        ofs << buffer << std::endl; 
    }
}