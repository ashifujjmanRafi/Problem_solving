#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,x=0,sum=0;
	cin>>a>>b;
	sum=a;
	while(a>=b){
		int y=0;
		x=(a/b);
		sum+=x;
		y=a%b;
		a=x+y;


	}
	cout<<sum;
	
	return 0;
}