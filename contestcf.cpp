#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,x,count=0,nm;
	std::vector<int> v;
	cin>>n>>k;
	nm=n;
	while(n--){
		cin>>x;
		v.push_back(x);

	}
	int i=0;
	int j=v.size()-1;
	while(v[i++]<=k){

		count++;
	}
	while(v[j--]<=k){

		count++;
	}
	count=min(nm,count);

	cout<<count<<endl;
	
	return 0;
}