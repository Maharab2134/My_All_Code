#include<iostream>
using namespace std;

class Minimum
{
private:
    int value;
public:
    Minimum()
    {
        value = 0;
    }
    Minimum(int c)
    {
        value=c;
    }
    bool operator < (Minimum a)
    {
        if(value<a.value)
            return true;
        else
            return false;
    }
};
int main()
{
    Minimum m1(12),m2(12);
    if(m1<m2)
    {
        cout<<"m1 is smaller than m2"<<endl;
    }
    else
    {
        cout<<"m2 is smaller than m1"<<endl;
    }
    return 0;

}
