// Secure Coding in C++
// Exercise 04_03
// Preventing Use-After-Free and Double Deletes, by Eduardo Corpeño

#include <iostream>

class Widget {
public:
    void greet() {
        std::cout << "Hello from Widget!" << std::endl;
    }
};

int main() {
    Widget* w = new Widget();
    w->greet();

    delete w;          // First delete
    w->greet();        // Use-after-free (undefined behavior)

    delete w;          // Double delete (undefined behavior)

    std::cout << std::endl;
    return 0;
}
