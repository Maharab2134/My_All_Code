#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define end "\n"
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll x=0,y=0;
    for(auto i:s){
        if(i=='U')y++;
        if(i=='L')x--;
        if(i=='D')y--;
        if(i=='R')x++;
        if (x==1 and y==1){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.t(0);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}