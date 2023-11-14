/*Write a C++ program to print out all Armstrong numbers between 1 and 10000. If sum of cubes of each digit of the number 
is equal to the number itself, then the number is called an Armstrong number.*/

#include <iostream>
#include <cmath>

using namespace std;

bool isArmstrong(int num) {
    int originalNum = num, lastDigit, digits = 0;
    while (originalNum != 0) {
        originalNum /= 10;
        ++digits;
    }
    originalNum = num;
    int sum = 0;
    while (originalNum != 0) {
        lastDigit = originalNum % 10;
        sum += pow(lastDigit, digits);
        originalNum /= 10;
    }
    return (num == sum);
}

int main() {
    for (int i = 1; i <= 10000; i++) {
        if (isArmstrong(i)) {
            cout << i << " ";
        }
    }
    return 0;
}


