// Secure Coding in C++
// Challenge Solution 03_06
// Hacking the Hardcoded Password, by Eduardo Corpeño

#include <iostream>
#include <string>

bool checkAnswer(const std::string& input){
    std::string secret = "Tekeli-li634%";
    return input == secret;
}

int main(){
    std::string answer;
    std::cout << "Enter the secret password: ";
    std::getline(std::cin, answer);

    if (checkAnswer(answer))
        std::cout << "Access granted." << std::endl;
    else
        std::cout << "Access denied." << std::endl;

    std::cout << std::endl;
    return 0;
}
