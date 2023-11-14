#include<iostream>
using namespace std;

class Alpha
{
private:
    int data;
public:
    Alpha()
    {
        data = 0;
    }
    Alpha(int a)
    {
        cout<<"Parameterized Constructor"<<endl;
        data = a;
    }
    Alpha(Alpha& a)
    {
        cout<<"Copy constructor"<<endl;
        data = a.data;
    }
    void operator = (Alpha& a)
    {
        cout<<"overloading assignment operator"<<endl;
        data = a.data;
    }
    void display()
    {
        cout<<data<<endl;
    }
};
int main()
{
    Alpha a,aa(10);
    aa.display();
    Alpha bb = aa;
    bb.display();
    a = bb;
    a.display();
    return 0;

}
