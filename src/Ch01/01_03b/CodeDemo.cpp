// Secure Coding in C++
// Exercise 01_03
// Safer Alternatives in Modern C++, by Eduardo Corpeño

#include <iostream>
#include <cstring>   // For strcpy, strlen
#include <cstdlib>   // For malloc, free

int main(){

    // 1. Raw pointers for dynamic memory
    char* name = (char*)malloc(100);  // dangerous: manual memory management
    strcpy(name, "Eduardo");
    std::cout << "Name: " << name << std::endl;
    free(name);  // must remember to free

    // 2. C-style arrays with fixed size
    int scores[5] = {95, 88, 76, 100, 67};  // no bounds checking
    std::cout << "Accessing 6th score (out of bounds): " << scores[5] << std::endl;  // undefined behavior

    // 3. Manual resource management (FILE*)
    FILE* f = fopen("sample.txt", "w");  // forget to close = resource leak
    if (f){
        fputs("This is a test.\n", f);
        // fclose(f);  // commented out to simulate forgetting
    }

    std::cout << std::endl << std::endl;
    return 0;
}
