#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::string reversed;
    for (int i = input.length() - 1; i >= 0; i--) {
        reversed += input[i];
    }

    std::cout << "The reversed string is: " << reversed << std::endl;
    return 0;
}
