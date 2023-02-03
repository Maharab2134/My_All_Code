//poblem Number:Contest 03
//Povlem Name: Count the Balloons

#include<iostream>
#include<map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char,int>m;
        char A='A';
        for(int i=1;i<=26;i++){
            m.insert({A,0});
            A++;
        }
        for(int i=0;i<n;i++){
            for(char j='A';j<='Z';j++){
                if(s[i]==j){
                    m[j]++;
                }
            }
        }
        int B=0;
        for(auto i: m){
            if(i.second>0){
                B+=2;
                B+=i.second- 1;
            }

        }
        cout<<B<<endl;
    }
}

