#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    reverse(s.begin(),s.end());

    string ss="";
    int Cnt=0;
    for(int i=0;i<s.size();i++)
    {
        if(Cnt==3)
        {
            ss+=',';
            ss+=s[i];
            Cnt=0;
        }
        else
        {
            ss+=s[i];
        }

        Cnt++;
    }

    reverse(ss.begin(),ss.end());
    cout<<ss<<endl;
}
