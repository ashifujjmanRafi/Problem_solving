#include <bits/stdc++.h>
using namespace std;
int main()
{
	int tc,n,s,t,min1;
	cin>>tc;
	while(tc--){
		cin>>n>>s>>t;
		min1=min(s,t);
		min1=(n-min1)+1;
		cout<<min1<<endl;
	}
	
	return 0;
}