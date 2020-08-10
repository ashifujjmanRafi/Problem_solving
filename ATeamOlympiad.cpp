#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[4]={0};
	int tc,x,min1;
	cin>>tc;
	std::vector<int> v;
	for (int i = 1; i <= tc; ++i)
	{
		cin>>x;
		if(x==1)
			a[0]++;
		else if(x==2)
			a[1]++;
		else
			a[2]++;
		v.push_back(x);

	}
	min1=(a[0],a[1]);
	min1=(min1,a[2]);
	if (min1!=0)
	{
		cout<<min1<<endl;
		


	}
	else{
		cout<<0<<endl;
	}
	
	
	return 0;
}