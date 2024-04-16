#include <iostream>
#include <string>

int main() {
    std::string str = "Hello World";

    // Convert the entire string to lowercase
    for (char &c : str) {
        c = std::tolower(c);
    }

    std::cout << "Lowercase string: " << str << std::endl;

    return 0;
}
