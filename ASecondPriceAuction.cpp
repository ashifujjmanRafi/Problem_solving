#include <bits/stdc++.h>
using namespace std;
int main()
{
	int tc,maxi=0,x,y=0;
	cin>>tc;
	vector<int> v;

	while(tc--){
		cin>>x;
		v.push_back(x);
		if(x>maxi){
			maxi=x;
		}
		
	}
	for (int i = 1; i <=v.size(); ++i)
	{
		if(v[i-1]==maxi){
			y=i;
			break;
		}
	}
	sort(v.begin(), v.end());
	cout<<y<<" "<<v[v.size()-2];

	
	return 0;
}