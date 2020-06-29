#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,x=3;
	vector<int> v;
	while(x--){
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	cout<<v[2]-v[0];
	return 0;
}