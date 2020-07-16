#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a1,b1;
	cin>>n;
	vector<pair<int,int>> v;

	while(n--){
		cin>>a1>>b1;
		v.push_back({a1,b1});

	}
	sort(v.begin(),v.end());

	for (int i = 1; i <v.size(); ++i)
	{
		if(v[i].second<v[i-1].second){
			cout<<"Happy Alex"<<endl;
			return 0;
		}
	}
	cout<< "Poor Alex" <<endl;

	
	return 0;
}