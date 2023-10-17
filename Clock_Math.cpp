#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    double cd,ef,gh;
    cin>>a>>b;
    cd=(a*60+b);
    ef=b*6;
    gh=abs(0.5*(60*a-11*b));
    if(gh>180)
    {
        gh=360-gh;
    }
    printf("%.7lf\n",gh);
}