#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int x,i,sum=0;
	cin>>x;
	while(x>0){
		if(x%2==1)
			sum++;
		x=x/2;
	}
	cout<<sum<<endl;

	
	return 0;
}