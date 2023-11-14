//  Write a C++ program to find first n Fibonacci number where n is the input from user.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int a = 0, b = 1, c;
    cout << "The first " << n << " Fibonacci numbers are: " << endl;
    cout << a << " " << b << " ";
    for (int i = 2; i < n; i++) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    return 0;
}
