//poblem Number:Contest 04
//Povlem Name: Crack the Code

#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        if(b == 0)
        {
            continue;
        }
        string now;
        cin >> now;
        for(int j = 0; j < b; j++)
        {
            if(now[j] == 'U'){a[i]--;}
            else if(now[j] == 'D'){a[i]++;}
            if(a[i] < 0){a[i]+=10;}
            if(a[i] > 9){a[i]-=10;}
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
 
int main(){
    int t;
    cin>> t;
    while(t--)
    {
        solve();
    }
    return 0;
}