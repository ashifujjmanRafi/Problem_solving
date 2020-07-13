#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,p,q,x,max=0;
	bool flag=true;

	cin>>n;

	int a[1000]={0};

	cin>>p;

	for (int i = 0; i <p ; ++i)
	{
		cin>>x;
		a[x]=1;
	}

	cin>>q;

	for (int i = 0; i <q ; ++i)
	{
		cin>>x;
		a[x]=1;
	}

	for (int i = 1; i <=n ; ++i)
	{
		if(a[i]!=1){

			flag =false;
			break;
		}
	}

	if(flag)
		cout<<"I become the guy."<<endl;
	else
		cout<<"Oh, my keyboard!"<<endl;
	return 0;
}