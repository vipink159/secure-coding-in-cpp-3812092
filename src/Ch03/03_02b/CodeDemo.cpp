// Secure Coding in C++
// Exercise 03_02
// Avoiding C-Style String Vulnerabilities, by Eduardo Corpeño

#include <iostream>
#include <cstring>
#include <cstdio>

int main(){
    char msg[32];
    char name[10];
    std::cout << "Enter your name: ";
    std::cin >> name;

    std::snprintf(msg, sizeof(msg), "Welcome, %s!", name); // Looks safe...

    std::cout << msg << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
