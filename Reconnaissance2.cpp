#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ar[n],x=1000000,m,a,b=0;

	for (int i = 0; i < n; ++i)
	{
		cin>>ar[i];
	}

	if(abs(ar[0]-ar[n-1])<x){
		x=abs(ar[0]-ar[n-1]);
		//cout<<x;
		m=1;
		a=n;}

	for(int i=0; i<n; i++){
		b=abs(ar[i]-ar[i+1]);
		if(b<x){
			x=b;
			m=i+1;
			a=i+2;
		}
		
		}

	
	cout<<m<<" "<<a;


	




	return 0;
}