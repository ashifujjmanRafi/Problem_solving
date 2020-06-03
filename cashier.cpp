#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k,y,max=1000000,sum=0;
	cin>>n;
	int ar[n];
	for(int i=0; i<n ; i++){

		cin>>ar[i];

	}
	for (int i = 0; i < n; ++i)

	{
		sum=0;
		for (int j = 0; j <ar[i] ; ++j)
		{
			cin>>y;
			sum=sum+y*5;

		}
		if((sum+ar[i]*15)<max) max=sum+ar[i]*15;
	}

	cout<<max<<endl;
	return 0;
}