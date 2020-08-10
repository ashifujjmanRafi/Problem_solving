#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,day=7,sum=0;
	cin>>n;
	vector<int> v;
	while(day--){
		cin>>x;
		v.push_back(x);

	}
	int j=0;
	while(1){

		for (int i = 0; i < 7; ++i)
		{
			if(( n=n-v[i])<=0){
				cout<<i+1<<endl;
				return 0;
			}
		}
		

	}
	
	//cout<<i;


	
	return 0;
}