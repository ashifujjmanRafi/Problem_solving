#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,sum=1;
	cin>>a>>b;
	for (int i = 1; i <=min(a,b) ; ++i)
	{
		sum=sum*i;
	}
	cout<<sum<<endl;
	
	return 0;
}