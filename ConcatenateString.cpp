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
    String operator + (String ss)
    {
        String temp;
        if(strlen(str)+strlen(ss.str)<100)
        {
            strcpy(temp.str,str);
            strcat(temp.str,ss.str);
        }
        else
        {
            cout<<"String overflow"<<endl;
        }
        return temp;
    }
};
int main()
{
    String s1="Hello ";
    String s2="World";
    String s3;
    s3=s1+s2;
    s3.display();
    return 0;
}
