#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m , a,b,x=0,y=0,z=0;
	cin>>n>>m>>a>>b;
	if(m*a<=b){
		cout<<n*a<<endl;
	}
	else
	{
		cout<<(n/m)*b+min((n%m)*a,b)<<endl;
	}

	
	return 0;
}