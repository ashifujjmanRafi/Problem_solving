#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,h,x,ans=0;
	cin>>n;
	vector<int> v;
	vector<int> p;
	while(n--){
		cin>>h>>x;
		v.push_back(h);
		p.push_back(x);

	}
	for (int i = 0; i < v.size(); ++i)
	{
		for (int j = 0; j < v.size(); ++j)
		{
			if(v[i]==p[j])
				ans++;
		}
	}
	cout<<ans<<endl;
	
	return 0;
}