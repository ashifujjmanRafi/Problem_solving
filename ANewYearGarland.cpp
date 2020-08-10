#include <bits/stdc++.h>
using namespace std;
int main()
{
	int tc;
	cin>>tc;
	while(tc--){
		int a[3]={0};
		cin>>a[0]>>a[1]>>a[2];
		sort(a,a+3);
		if(a[2]>a[0]+a[1]+1)
			cout<<"NO"<<endl;
		else 
			cout<<"YES"<<endl;

	}
	
	return 0;
}