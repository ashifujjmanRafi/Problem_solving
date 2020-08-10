#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x,x1;
	std::vector<long long int> v;
	long long int i,count;
	while(x--){
		cin>>x1;
		v.push_back(x1);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); ++i)
	{
		if(v[0]>v[i]&&v[i]<v[v.size()-1])
			count++;
	}
	cout<<count<<endl;
	return 0;
}