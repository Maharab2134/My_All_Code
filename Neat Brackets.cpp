#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack< char >st;
    string s;
    cin>>s;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='(')
            {
                st.push(s[i]);
            }
            if(!st.empty()){
            if(s[i]==')')
            {
                if(st.top()=='(')
                    st.pop();
            }
        }
        else st.push(s[i]);
        }
        if (st.empty())
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    return 0;
}
