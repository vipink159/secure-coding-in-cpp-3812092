// Secure Coding in C++
// Exercise 04_03
// Preventing Use-After-Free and Double Deletes, by Eduardo Corpeño

#include <iostream>
#include <memory>

class Widget {
public:
    void greet() {
        std::cout << "Hello from Widget!" << std::endl;
    }
};

int main() {
    std::unique_ptr<Widget> w = std::make_unique<Widget>();
    w->greet();

    // Smart pointer goes out of scope and cleans up automatically
    // No use-after-free or double delete possible

    std::cout << std::endl;
    return 0;
}
