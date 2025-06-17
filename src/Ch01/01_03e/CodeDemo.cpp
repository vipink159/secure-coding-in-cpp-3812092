// Secure Coding in C++
// Exercise 01_03
// Safer Alternatives in Modern C++, by Eduardo Corpeño

#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <fstream>  // for file streams
#include <limits>   // for input validation

int main(){

    // 1. Use std::string instead of raw char* and malloc/free
    std::string name = "Eduardo";
    std::cout << "Name: " << name << std::endl;

    // 2. Use std::array with bounds-checked access
    std::array<int, 5> scores = {95, 88, 76, 100, 67};
    try {
        std::cout << "Accessing 6th score safely: " << scores.at(5) << std::endl;  // throws std::out_of_range
    } catch(const std::out_of_range& e) {
        std::cerr << "Caught out_of_range error: " << e.what() << std::endl;
    }

    // 3. Use RAII with std::ofstream for file handling
    {
        std::ofstream ofs("sample.txt");
        if (ofs){
            ofs << "This is a test.\n";
        } else {
            std::cerr << "Failed to open file." << std::endl;
        }
    }  // file is automatically closed here

    std::cout << std::endl << std::endl;
    return 0;
}
