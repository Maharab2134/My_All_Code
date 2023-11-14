/*Write a function which receives a float and an int from main(), finds the product of these two and returns the product 
which is printed through main() in C++. */

#include <iostream>
float product (float a, int b) 
{
    return a * b;
}

int main() {
    float a;
    int b;
    std::cin >> a >> b;
    std::cout << product(a, b) << std::endl;
    return 0;
}
