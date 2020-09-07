#include <bits/stdc++.h>
using namespace std; 
int main()
{
	int n,m,x;
	vector<int> v1;
	vector<int> v2;
	cin>>n;
	while(n--){
		cin>>x;
		v1.push_back(x);
	}
	cin>>m;
	while(m--){
		cin>>x;
		v2.push_back(x);
	}
	sort(v2.begin(), v2.end());

	cout<<v1[v1.size()-1]<<" "<<v2[v2.size()-1]<<endl;

	return 0;
}