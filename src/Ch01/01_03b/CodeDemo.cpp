// Secure Coding in C++
// Exercise 01_03
// Safer Alternatives in Modern C++, by Eduardo Corpeño

#include <iostream>
#include <string>
#include <array>
#include <fstream>
#include <limits>

int main(){

    std::string name = "Eduardo";
    std::cout << "Name: " << name << std::endl;

    // 2. C-style arrays with fixed size
    std::array<int, 5> scores = {95, 88, 76, 100, 67};  // no bounds checking
    try{
        std::cout << "Accessing 6th score (out of bounds): " << scores.at(5) << std::endl;  // undefined behavior
    } catch(const std::out_of_range& e){
        std::cerr << "Caught out_of_range error: " << e.what() << std::endl;
    }

    // 3. Manual resource management (FILE*)
    std::fstream ofs("sample.txt");
    if(ofs){
        ofs << "This is a test.\n";
    } else {
        std::cerr << "Failed to open file." << std::endl;
    }

    std::cout << std::endl << std::endl;
    return 0;
}
