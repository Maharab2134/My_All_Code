#include<iostream>
using namespace std;

class Student
{
    int marks;
public:
    Student()
    {
        marks = 0;
    }
    Student(int s)
    {
        marks = s;
    }
    Student operator + (Student s2)
    {
        Student s1;
        s1.marks = marks+s2.marks;
        return s1;
    }
    void operator + ()
    {
        marks = marks;
    }
    void display()
    {
        cout<<"Total marks: "<<marks<<endl;
    }
};

int main()
{
    Student s1 = 10,s2(20),s3,s4=40;
    s1+s2;
    s1.display();
    s3 = s2+s4;
    s3.display();
   // s3 = s1+s2+s4;
    //s3.display();
    return 0;
}
//operator return value
/*
class Counter
{
    int Count;
public:
    Counter()
    {
        Count = 0;
    }
    Counter(int c)
    {
        Count = c;
    }
    int get_Count()
    {
        return Count;
    }
    Counter operator ++()
    {
        ++Count;
        Counter temp;
        temp.Count = Count;
        return temp;
    }
    Counter operator ++ ()
    {
        ++Count;
        return Counter(Count);
    }
    Counter operator ++ (int)
    {
        Count++;
        return Counter(Count);
    }
};

class Counter
{
    int Count;
public:
    Counter()
    {
        Count = 0;
    }
    int get_Count()
    {
        return Count;
    }
    void operator ++()
    {
        ++Count;
    }
    void operator ++(int)
    {
        Count++;
    }
};
int main()
{
    Counter c1,c2;
    cout<<c1.get_Count()<<endl;
    cout<<c2.get_Count()<<endl;
    ++c1;
    c2 = c1++;
    cout<<c1.get_Count()<<endl;
    cout<<c2.get_Count()<<endl;
    return 0;

}*/
