#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x=4,count=1,y;
	vector<int> v;
	while(x--){
		cin>>y;
		v.push_back(y);
	}
	sort(v.begin(), v.end());

	for (int i = 1; i <v.size(); ++i)
	{
		if(v[i-1]!=v[i])
			count++;
			
		
	}
	cout<<4-count<<endl;


	
	return 0;
}