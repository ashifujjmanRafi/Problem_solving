#include <bits/stdc++.h>
using namespace std;
int main()
{
	int tc;
	cin>>tc;
	while(tc--){
		int a,b;
		cin>>a>>b;
		if(a==1)
			cout<<0<<endl;
		else if(a==2)
			cout<<b<<endl;
		else 
			cout<<2*b<<endl;
	}

	
	return 0;
}