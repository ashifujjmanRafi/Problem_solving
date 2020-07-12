#include <bits/stdc++.h>
using namespace std;
int main()
{
	int tc;
	cin>>tc;

	int a;
	while(tc--){
		
		cin>>a;
 
		int ans = __builtin_popcount(a);//counting binary one to construct the number
		//cout<<ans<<endl;
 
		long long int  res = pow(2, ans);
		cout<<res<<endl;
	}

	
	return 0;
}