// Secure Coding in C++
// Exercise 02_02
// Safe Numeric and String Conversions, by Eduardo Corpeño

#include <iostream>
#include <string>
#include <vector>

int main(){
    std::string input;
    std::cout << "Enter index: ";
    std::cin >> input;

    // Unsafe: assumes input is clean decimal and fully numeric
    int index = std::stoi(input); // may throw, or misinterpret

    std::vector<std::string> options = {
        "Option A", "Option B", "Option C", "Option D"
    };

    std::cout << "You selected: " << options[index] << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
