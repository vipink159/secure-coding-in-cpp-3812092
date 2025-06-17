// Secure Coding in C++
// Challenge 02_05
// Secure a data parsing function, by Eduardo Corpeño

#include <iostream>
#include <string>
#include <map>
#include <sstream>

std::map<std::string, std::string> parseSettings(const std::string& input){
    std::map<std::string, std::string> result;
    std::istringstream ss(input);
    std::string pair;

    while (std::getline(ss, pair, ';')){
        size_t eq = pair.find('=');

        // Unsafe: no check for missing '=', empty keys/values, or duplicates
        std::string key = pair.substr(0, eq);
        std::string value = pair.substr(eq + 1);

        result[key] = value; // silently overwrites
    }

    return result;
}

int main(){
    std::string rawInput;
    std::cout << "Enter settings (key=value;...): ";
    std::getline(std::cin, rawInput);

    auto settings = parseSettings(rawInput);

    std::cout << "Parsed settings:\n";
    for (const auto& [k, v] : settings){
        std::cout << k << ": " << v << "\n";
    }

    std::cout << std::endl;
    return 0;
}
