#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x,x1;
	cin>>x;
	std::vector<long long int> v;
	long long int i,count=0;
	while(x--){
		cin>>x1;
		v.push_back(x1);
	}
	sort(v.begin(), v.end());
	for (i = 0; i < v.size(); ++i)
	{
		if(v[i]>v[0] && v[i]< v[v.size()-1])
			count++;
	}
	cout<<count<<endl;
	return 0;
}