//poblem Number: 1537A
//Povlem Name:   Arithmetic Array

#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
const int maxn = 3e5+10;
int n,t,a[maxn];
int main()
{
	int t; cin >> t;
	while( t-- )
	{
		scanf("%d",&n );
		int sum = 0;
		for(int i=1;i<=n;i++)	scanf("%d",&a[i] ), sum += a[i];
		if( sum-n<0 )	cout << 1 << endl;
		else	cout << sum-n << endl;
	}
	return 0;
}

