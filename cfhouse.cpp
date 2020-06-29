#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,k,x,min=1000;
	cin>>n>>m>>k;

	std::vector<int> v;

	while(n--){
		cin>>x;
		v.push_back(x);
	}

	for (int i = 0 ; i < v.size(); ++i)
	{
		if(v[i]>0 && k>=v[i] && abs(m-(i+1))<min){
			min=abs(m-(i+1));
		}
	}
	cout<< min*10;

	
	return 0;
}