#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v;
	string s;
	int y,sum=0;;
	for (int i = 0; i <4; ++i)
	{
		cin>>y;
		v.push_back(y);
	}
	cin>>s;

	for (int i = 0; i < s.size(); ++i)
	{
		int x;
		x=s[i]-48;
		sum=sum+v[x-1];
	}
	cout<<sum<<endl;
	return 0;
}