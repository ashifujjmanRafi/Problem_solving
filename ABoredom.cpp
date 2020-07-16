#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,sum=0;
	std::vector<int> v;
	cin>>n;
	while(n--){
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	for (int i = v.size()-1; i>=0 ; i--)
	{
		for (int j =i-1; j>=0; j--)
		{
			
		}
	}
	cout<<sum<<endl;
	
	return 0;
}