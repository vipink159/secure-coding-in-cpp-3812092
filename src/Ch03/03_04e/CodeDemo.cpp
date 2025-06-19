// Secure Coding in C++
// Exercise 03_04
// Preventing Information Leaks in Logs, by Eduardo Corpeño

#include <iostream>
#include <string>

void log(const std::string& msg){
    std::cout << "[LOG] " << msg << std::endl;
}

int main(){
    std::string username, password;
    std::cout << "Username: ";
    std::cin >> username;
    std::cin.ignore();

    std::cout << "Password: ";
    system("stty -echo");
    std::getline(std::cin, password);
    system("stty echo");
    std::cout << std::endl;

    log("User '" + username + "' attempted login.");

    // Simulate auth result
    bool success = (username == "admin" && password == "1234");
    log("Auth success: " + std::string(success ? "true" : "false"));

    std::cout << std::endl << std::endl;
    return 0;
}
