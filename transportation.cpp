#include <bits/stdc++.h>
using namespace std;
int main()
{
	int tc,x,y,sum=0;
	
	cin>>tc>>x;
	int v[tc];
	
	for (int i = 1; i < tc; ++i)
	{
		cin>>v[i];
	}

	for (int i =1; i <tc; ++i)
	{
		sum = i+v[i] ;

		if(sum==x){

			cout<<"Yes"<<endl;
			return 0;
		}
		else i=sum-1;
		
	}

	cout<<"No"<<endl;

	
	return 0;
}	