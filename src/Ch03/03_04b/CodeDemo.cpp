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

    std::cout << "Password: ";
    std::cin >> password;

    log("User '" + username + "' attempted login with password: " + password);

    // Simulate auth result
    bool success = (username == "admin" && password == "1234");
    log("Auth success: " + std::string(success ? "true" : "false"));

    std::cout << std::endl << std::endl;
    return 0;
}