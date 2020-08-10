#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,h=0,c=0;
	cin>>n;
	while(c<=n){
		h++;
		c+=h*(h+1)/2;
		
	}
	cout<<h-1<<endl;
	
	return 0;
}