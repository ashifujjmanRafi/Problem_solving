#include <bits/stdc++.h>
using namespace std;
int main(){

	int tc;

	cin>>tc;

	while(tc--){
		int a, b,x=0;

		cin>>a>>b;

		if(a%b==0)
		{
			cout<<"0"<<endl;
		}
		else
		{
			x=b-(a%b);
			cout<<x<<endl;
		}
	}
	return 0;

}