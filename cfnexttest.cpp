#include <bits/stdc++.h>
#include <vector>

using namespace std;
int main()
{
	int x,y,min=3000;
	cin>>x;
	vector<int> v;
	while(x--){

		cin>>y;
		v.push_back(y);
		
	}

	sort(v.begin(),v.end());
	for (int i =1; i <=v.size(); i++)
	{
		
		if(v.size()==1 && v[i]==1)cout<<i+1;
		else if(v[i-1]!=i) cout<<i;
	}
	return 0;
}