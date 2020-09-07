#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m,n,sum=0;
	cin>>m>>n;
	int ar[m];
	for (int i = 0; i <m; ++i)
	{
		cin>>ar[i];
	}
	sort(ar,ar+m);
	for (int i = 0; i <n; ++i)
	{
		if(ar[i]<0)
			sum+=ar[i];
	}

	cout<<abs(sum)<<endl;
	
	return 0;
}