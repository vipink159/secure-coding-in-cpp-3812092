// Secure Coding in C++
// Exercise 03_02
// Avoiding C-Style String Vulnerabilities, by Eduardo Corpeño

#include <iostream>
#include <string>

int main(){
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;

    std::string msg = "Welcome, " + name + "!";

    std::cout << msg << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
