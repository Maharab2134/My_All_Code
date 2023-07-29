#include<bits/stdc++.h>
using namespace std;
void main1(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<(a+b+c-min({a,b,c}) >= 10? "yes\n":"No\n");
}
int main(){
    int t; cin >> t;while (t--)
    {
        main1();
    }   
}