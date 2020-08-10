#include <bits/stdc++.h>
using namespace std;
int main()
{
	int tc,x;
	cin>>tc;
	bool xy=false;
	while(tc--)
	{
		cin>>x;
		if(x==1)
		{
			xy=true;

		}
	}
	if(xy)
		cout<<"hard"<<endl;
	else
		cout<<"easy"<<endl;
	
	return 0;
}