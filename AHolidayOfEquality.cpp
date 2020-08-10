#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x,y,z=0,w=0,m;
	cin>>x;
	m=x;
	while(m--){
		cin>>y;
		z=max(z,y);
		w+=y;


	}
	cout<<(x*z)-w<<endl;
	
	return 0;
}