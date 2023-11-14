#include<iostream>
using namespace std;

class Distance
{
private:
    int feet;
    float inches;
public:
    Distance()
    {
        feet = 0;
        inches = 0.0;
    }
    Distance(int ft,float in)
    {
        feet = ft;
        inches = in;
    }
    void getDist()
    {
        cout<<"Enter feet: ";
        cin>>feet;
        cout<<"Enter inches: ";
        cin>>inches;
    }
    void showDist()
    {
        cout<<"Feet: "<<feet<<endl<<"Inches: "<<inches<<endl;
    }
    void operator += (Distance d2)
    {
        feet+=d2.feet;
        inches+=d2.inches;
        if(inches>=12.0)
        {
            inches-=12.0;
            feet++;
        }
    }
};
int main()
{
    Distance d1;
    d1.getDist();
    Distance d2(11,6.25);
    d2.showDist();
    d1+=d2;
    d1.showDist();
    return 0;
}
