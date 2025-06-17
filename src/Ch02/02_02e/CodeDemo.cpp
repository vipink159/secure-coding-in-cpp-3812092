// Secure Coding in C++
// Exercise 02_02
// Safe Numeric and String Conversions, by Eduardo Corpeño

#include <iostream>
#include <string>
#include <vector>
#include <charconv>

int main(){
    std::string input;
    std::cout << "Enter index: ";
    std::cin >> input;

    int index = 0;
    auto result = std::from_chars(input.data(), input.data() + input.size(), index);

    if (result.ec == std::errc() && result.ptr == input.data() + input.size()){
        std::vector<std::string> options = {
            "Option A", "Option B", "Option C", "Option D"
        };

        if (index >= 0 && index < static_cast<int>(options.size()))
            std::cout << "You selected: " << options[index] << std::endl;
        else
            std::cerr << "Index out of range." << std::endl;
    } 
    else
        std::cerr << "Invalid input: not a clean decimal number." << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
