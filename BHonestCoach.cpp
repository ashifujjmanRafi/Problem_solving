#include <bits/stdc++.h>
using namespace std;
int main()
{
	int tc;
	cin>>tc;
	while(tc--){
		int n,min1=100000;
		cin>>n;
		int v[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>v[i];
		}
		sort(v,v+n);
		for (int i = 1; i <n; ++i)
		{
			if(v[i]-v[i-1] < min1)
				min1=v[i]-v[i-1];
		}

		cout<<min1<<endl;
	}
	
	return 0;
}