//Write a c++ progrum to add two rational number using friend function input user

#include<iostream>
using namespace std;
class Rational{
     int num, den;
public:
    Rational(int n = 0, int d = 1) : num(n), den(d) {}
    friend Rational operator+(const Rational &a, const Rational &b);
    void print()
    { cout << num << "/" << den << endl; }
};

Rational operator+(const Rational &a, const Rational &b)
{
    return Rational(a.num * b.den + b.num * a.den, a.den * b.den);
}
int main(){
int x,y,z,k;
cout<<"Enter the frist rational number: ";
cin>>x>>y;
cout<<"Enter the 2nd rational number: ";
cin>>z>>k;
Rational a(x, y), b(z, k);
    Rational c = a + b;
    cout << "The sum of the two rational numbers is: ";
    c.print();
    return 0;

}




