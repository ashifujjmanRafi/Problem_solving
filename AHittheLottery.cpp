#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,x=0;
	cin>>n;
	int ar[5]={100,20,10,5,1};

	for (int i =0; i <5 ; i++)
	{
		
		x=x+n/ar[i];

		n = n%ar[i];

		if(n==0)
			break;
	}

	cout<<x<<endl;
	
	return 0;
}