#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n=0,x,m=0;
	cin>>x;
	
	string a;
	cin>>a;

	//sort(s.begin(),s.end());

	for (int i = 0; i <a.size(); ++i)
	{
		if(a[i]=='X')
			n++;
		else
			m++;
	}
	cout<<abs(x/2,max(m,n))<<endl;

	if(n>m){
		for (int i = 0; i <x/2; ++i)
		{
			if(a[i]=='X'){
				a[i]='x';
			}
			//cout<<a[i];
		}
	}

	else if(n<m)
	{
		for (int i = 0; i <x/2; ++i)
		{
			if(a[i]=='x'){
				a[i]='X';
			}
			//cout<<a[i];
		}
	}

	for (int i = 0; i <x/2; ++i)
		{
			cout<<a[i];
		}cout<<endl;
	
	return 0;
}