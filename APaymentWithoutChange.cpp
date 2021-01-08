#include <bits/stdc++.h>
using namespace std;
int main()
{
	int tc;
	cin>>tc;
	while(tc--){
		int a,b,n,s,x,sum2=0;
		cin>>a>>b>>n>>s;
		
		if(s%n>b)
       	{
         	cout<<"no"<<endl;
       	}
       	else{
			if(a*n+b>=s)
				cout<<"YES"<<endl;
			else
				cout<<"no"<<endl;

       	}


		
	}
	
	return 0;
}