#include<bits/stdc++.h>
using namespace std;
int main(){
string a,b;  
int x=0,i=0,y=0;
cin>>a>>b;
for ( i = 0; i < a.size(); i++)
{
    x=a[i]+x;
}
for ( i = 0; i < b.size(); i++)
{
    y=b[i]+y;
}
if(x==y)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;

}
