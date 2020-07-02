#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,a=0,b=0,x;
	cin>>n;
	while(n--){
		cin>>x;
		if(x>0)
		 a=a+x;

		else b=b+x;
	}
	cout<< a+abs(b) <<endl;

}