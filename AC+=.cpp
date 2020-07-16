#include <bits/stdc++.h>
using namespace std;
int main()
{
	int tc;
	cin>>tc;
	long long int a,b,n,sum1=0;

	while(tc--){

		

		cin>>a>>b>>n;
		while((a+b) < (n+1)){
			if(a>b)
				b=b+a;
			else
				a=a+b;
			sum1++;

			//cout<<a<<" "<<b<<endl;
		}
		cout<<sum1+1<<endl;
		sum1=0;

	}
	
	return 0;
}