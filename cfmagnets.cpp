#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,count=0;
	cin>>n;
	std::vector<int> v;
	while(n--){
		cin>>x;
		v.push_back(x);
	}
	for (int i = 0; i <v.size(); ++i)
	{
		if(v[i]!=v[i+1]) count++;
	}
	cout<<count<<endl;
	
	return 0;
}