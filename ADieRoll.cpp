#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	a=max(a,b);
	if (6%(6-(a-1))==0)
	{
		cout<< 1 <<"/" << 6/(6-(a-1))<<endl;
		
	}
	else if (6%(6-(a-1))==2)
	{
		cout<< (6-(a-1))/2 <<"/" << 6/2<<endl;
	}
	else
		cout<< (6-(a-1)) <<"/" << 6<<endl;
	
	return 0;
}