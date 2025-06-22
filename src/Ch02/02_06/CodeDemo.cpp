// Secure Coding in C++
// Challenge Solution 02_06
// Secure a data parsing function, by Eduardo Corpeño

#include <iostream>
#include <string>
#include <map>
#include <sstream>
#include <cctype>

bool isValidKey(const std::string& key){
    if (key.empty()) return false;
    for (char c : key)
        if (!std::isalnum(c) && c != '_') 
            return false;
    return true;
}

bool isValidValue(const std::string& value){
    if (value.empty()) return false;
    for (char c : value)
        if (!std::isdigit(c)) 
            return false;
    return true;
}

std::map<std::string, std::string> parseSettings(const std::string& input){
    std::map<std::string, std::string> result;
    std::istringstream ss(input);
    std::string pair;

    while (std::getline(ss, pair, ',')){
        size_t eq = pair.find('=');

        if (eq == std::string::npos || eq == 0 || eq == pair.size() - 1)
            continue;

        std::string key = pair.substr(0, eq);
        std::string value = pair.substr(eq + 1);

        if (!isValidKey(key)) continue;
        if (!isValidValue(value)) continue;
        if (result.count(key) > 0) continue;

        result[key] = value;
    }
    return result;
}

int main(){
    std::string rawInput;
    std::cout << "Enter settings (key=value,key=value,...): ";
    std::getline(std::cin, rawInput);

    auto settings = parseSettings(rawInput);

    std::cout << "Parsed settings:\n";
    for (const auto& [k, v] : settings)
        std::cout << k << ": " << v << "\n";

    std::cout << std::endl;
    return 0;
}
