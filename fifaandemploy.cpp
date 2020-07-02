#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x,count =0 ;
	cin>>x;
	for (int i = 2; i <=x; ++i)
	{
		if((x-i)%i==0) count++;
	}
	cout<<count;
	return 0;
}