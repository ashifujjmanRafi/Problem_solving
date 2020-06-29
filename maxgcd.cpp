#include <bits/stdc++.h>
using namespace std;
int main()
{	//1tox ,max gcd from every subset from 1tox

	int tc,x;
	cin>>tc;
	//std::vector<int> v;
	while(tc--){

		cin>>x;
		if(x==1)cout<<1<<endl;
		else cout<<x/2<<endl;
	}

	
	return 0;
}