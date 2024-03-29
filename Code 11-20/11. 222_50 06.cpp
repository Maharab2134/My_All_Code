//poblem Number: 1783A
//Povlem Name: Make it Beautiful

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0; i<n;i++){
       int val;
       cin>>val;
       arr.push_back(val);
    }
    sort(arr.begin(), arr.end(), greater<int>());
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            swap(arr[i], arr[n-1]);
        }
    }
    int sum=0;   
    for(int i=0;i<n;i++){
        if(sum==arr[i]){
            cout<<"NO"<<"\n";
            return;
        }else{
            sum+=arr[i];
        }
    }
    cout<<"YES"<<"\n";
    for (auto i : arr)
        cout << i << " ";
    cout<<"\n";
    return;
}

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}