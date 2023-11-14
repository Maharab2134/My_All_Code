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
        feet=0;
        inches =0.0;
    }
    Distance(int ft,float in)
    {
        feet = ft;
        inches = in;
    }
    void getdist()
    {
        cout<<"\nEnter feet: ";
        cin>>feet;
        cout<<"\nEnter inches: ";
        cin>>inches;
    }
    void showdist()
    {
        cout<<feet<<" "<<inches<<endl;
    }
    bool operator < (Distance d2) const
    {
        float b1 = feet+inches/12;
        float b2 = d2.feet+d2.inches/12;
        return(b1<b2)? true : false;
    }

};
int main()
{
    Distance dist1;
    dist1.getdist();
    Distance dist2(6,2.5);
    dist1.showdist();
    dist2.showdist();
    if(dist1<dist2)
        cout<<"\n dist1 is less than dist2";
    else
        cout<<"\n dist1 is greater than (or equal to) dist2";
    return 0;
}
