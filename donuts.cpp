#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x,ma=3,sum=0,count=0;
	std::vector<int> v;
	while(ma--){
		cin>>x;
		v.push_back(x);

	}
	sort(v.begin(),v.end());
	sum=v[1]+v[0];

	while(sum<v[2]+1){

		count++;
		sum=sum+1;

	}
	cout<<count<<endl;



	
	return 0;
}