#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])

{
	long long int i,j,x=0,k;

	cin>>i>>j;

	while(j%i==0){
		
		j=j/i;
		x++;

	}
	if(x!=0 && j==1){
	    cout<< "YES"<<endl;
	    cout<<x-1<<endl;
	}
	else cout<<"NO";

	




	return 0;
}