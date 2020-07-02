#include <bits/stdc++.h>
using namespace std;
int main()
{
	
	long long int a,b,c,d,k,max1,min1,out;
	cin>>a>>b>>c>>d>>k;
	max1= max(a,c);
	min1= min(b,d);
	if(max1>min1) cout<< 0<<endl;
	else{
	    if(k>=max1&&k<=min1) {

		    cout<< (min1-max1) <<endl;
		//cout<<k;
	    }
	    else cout << (min1-max1)+1 <<endl; 
    }
	return 0;
}