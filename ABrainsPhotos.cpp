#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x,y;
	cin>>x>>y;
	char z;
	bool m=false;
	for (int i = 0; i < x; ++i)
	{
		for (int j = 0; j <y; ++j)
		{
			cin>>z;
			if(z=='C'||z=='M'||z=='Y'){
				m=true;
			}
		}
	}
	if(m)
		cout<<"#Color"<<endl;
	else
		cout<<"#Black&White"<<endl;
	
	return 0;
}