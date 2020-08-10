#include <bits/stdc++.h>
using namespace std;
int main()
{
	int tc,max1=-1,min1=100001,count=-2,x;
	std::vector<int> v;
	cin>>tc;
	while(tc--){
		cin>>x;
		if(x>max1){
			max1=x;
			count++;
		}
		if(x<min1){
			min1=x;
			count++;
		}
	}
	cout<<count<<endl;
	
	return 0;
}