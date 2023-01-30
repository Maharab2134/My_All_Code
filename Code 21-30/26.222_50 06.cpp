//poblem Number: 1030A
//Povlem Name:  In Search of an Easy Problem

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, i;
    cin >> n;

    while(n>0) {
        cin >> i;
        if (i == 1) {
            cout << "HARD" << endl;
            return 0; 
        }
        n--;
    }    
    cout << "EASY" << endl; 

    return 0;
}