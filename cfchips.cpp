#include <bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	while(n){

		for (int i = 1; i <=m; ++i)
		{
			
			if(n>=i) n=n-i;
			else {
				cout<<n<<endl;
				return 0;
			}

			
		}

	}
	cout<<n<<endl;
	return 0;
}