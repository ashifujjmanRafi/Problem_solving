#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x,sum=0;
	cin>>x;
	if(x%2==0){
		cout<<x/2<<endl;
		while(sum!=x){
			sum+=2;
			cout<<2<<" " ;
		}

	}
	else{
		cout<<x/2<<endl;
		cout<<3<<" ";
		x=x-3;
		while(sum!=x){
			cout<<2<<" ";
			sum+=2;


		}
	}
	
	return 0;
}