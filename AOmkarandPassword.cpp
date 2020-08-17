#include <bits/stdc++.h>
using namespace std;
int main()
{
	int tc;
	cin>>tc;
	while(tc--){
		int n,x,count=0;
		vector<int> v;
		cin>>n;
		for (int i = 0; i <n; ++i)
		{
			cin>>x;
			v.push_back(x);
		}

		sort(v.begin(),v.end());
		if (v[0]!=v[n-1])
		{
			cout<<1<<endl;
		}
		else 
			cout<<n<<endl;
	}

	return 0;
} 