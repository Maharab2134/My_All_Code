#include<bits/stdc++.h>
using namespace std;
int main(){
    string A;
    cin>>A;
    int l=0;
    int h = A.size()-1;


    while (h > l) {
        if (A[l++] != A[h--]) {
            cout<<"No";
            return 0;

        }
    }

    cout<<"Yes";

    return 0;
}

