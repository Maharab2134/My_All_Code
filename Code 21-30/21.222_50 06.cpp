//poblem Number: 734A
//Povlem Name:  Anton and Danik

#include <iostream>
using namespace std;

int main ()
{
    int n,i,a,b;
    char ch;

    while (cin >> n)
    {
        a = 0;
        b = 0;

        for (i=1; i<=n; i++)
        {
            cin >> ch;

            if (ch == 'A')
                a = a + 1;
            else
                b = b + 1;
        }

        if (a > b)
            cout << "Anton" << endl;
        else if (b > a)
            cout << "Danik" << endl;
        else
            cout << "Friendship" << endl;
    }

    return 0;
}