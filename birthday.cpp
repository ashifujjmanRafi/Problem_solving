#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m,k,l,ans=0;
	cin>>n>>m>>k>>l;
	if(n<m || n<k+l){
		cout<<"-1"<<endl;
	}
		
	else
    {
         ans=l+k/m;
        

        if(ans >0 )cout<<ans<<endl;
        else cout<<"1"<<endl;
    }
	
	return 0;
}