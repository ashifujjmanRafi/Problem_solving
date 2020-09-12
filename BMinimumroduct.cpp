#include <bits/stdc++.h>
using namespace std;
int main()
{
	int tc;
	cin>>tc;
	while(tc--){
	long long  a,b,x,y,n,bb,n1,ans1,ans2;
     cin>>a>>b>>x>>y>>n;
     if(a-x>=n)
     {
         ans1=(a-n)*b;
 
     }
     else if(a-x<n)
     {
         n1=n-(a-x);
         bb=max(y,b-n1);
         ans1=x*bb;
     }
     if(b-y>=n)
     {
         ans2=(b-n)*a;
     }
     else if(b-y<n)
     {
         n1=n-(b-y);
         bb=max(x,a-n1);
         ans2=y*bb;
     }
     cout<<min(ans1,ans2)<<endl;

	}
	
	return 0;
}