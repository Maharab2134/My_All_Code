// Write a C++ program to find out first n perfect number where n is the input from user.

#include<iostream>
using namespace std;
int main(){
    int n,i,k=0;
    cout<<"Enter a number: ";
    cin >> n;
    for ( i = 1; i < n; i++)
    {
        if (n%i==0)
        {
            k=k+i;
        }

    }
    if (k==n)
    {
        cout<<" Is a parfrct number: ";
    }
    return 0;
}
