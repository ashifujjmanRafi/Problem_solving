#include <bits/stdc++.h>
using namespace std;
int main()
{
	int tc;
	cin >> tc;
	while(tc--){
		
		long long int a, b,n,r,i;
		cin>>a>>b>>n;
		if(n%3==1)
            cout<<b<<endl;
        else if(n%3==0)
            cout<<a<<endl;
        else
            {
            r=a^b;
            cout<<r<<endl;
            r=0;
	        }
}
	return 0;
}