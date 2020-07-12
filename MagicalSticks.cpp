#include <bits/stdc++.h>
using namespace std;
int main()
{
	int tc;
	cin>>tc;
	while(tc--){
		long long int n,o=0,i;
		cin>>n;
		if(n>1){

			o=(n*(n+1))/2;
			cout<<o/n<<endl;
			o=0;
		}
		else
			cout<<1<<endl;

	}
	
	return 0;
}