#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	std::vector<int> v;
	int x;
	while(n--){
		cin>>x;
		v.push_back(x);
	}
	for (int i = 1; i <=v.size(); ++i)
	{
		for(int j=0;j<v.size();j++){

			if(v[j]==i) cout<<j+1<<" ";
		}
	}
	
	return 0;
}