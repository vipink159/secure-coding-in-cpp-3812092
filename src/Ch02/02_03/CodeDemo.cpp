// Secure Coding in C++
// Exercise 02_03
// Preventing Format String Vulnerabilities, by Eduardo Corpeño

#include <iostream>
#include <string>
#include <cstdio>

int main(){
    std::string userInput;
    std::cout << "Enter a message: ";
    std::getline(std::cin, userInput); 

    std::printf(userInput.c_str()); 

    std::cout << std::endl << std::endl;
    return 0;
}
