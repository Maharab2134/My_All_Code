#include<iostream>
#include<cstring>
using namespace std;

class String
{
private:
    char str[100];
public:
    String()
    {
        str[0]='\0';
    }
    String(char s[])
    {
        strcpy(str,s);
    }
    void display()
    {
        cout<<str;
    }
    void getstr()
    {
        cin>>str;
    }
    bool operator == (String ss)
    {
        if(strcmp(str,ss.str) == 0)
        {
            return true;
        }
        else
            return false;

    }

};
int main()
{
    String s1 = "yes";
    String s2 = "no";
    String s3;
    cout<<"\nEnter yes or no: ";
    s3.getstr();
    if(s3 == s1)
        cout<<"You typed yes"<<endl;
    else if(s3 == s2)
        cout<<"You typed no"<<endl;
    else
        cout<<"You didn't follow instructions"<<endl;
    return 0;
}
