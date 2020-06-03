#include <bits/stdc++.h>
using namespace std;
int main(){

	int tc;
	cin>>tc;
	while(tc--){

	int n,k,sum=0;

	cin>>n>>k;
	
	while(k--){
		for (int i = 2; i <=n; ++i)
		{
			if(n%i==0){
				sum=n+i;
				n=n+i;
				i=2;
				break;
			}
		}

	}
	cout<<sum<<endl;
}


return 0;
}