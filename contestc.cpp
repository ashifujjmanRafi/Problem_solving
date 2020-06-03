#include <bits/stdc++.h>
using namespace std;
int main(){

	int tc;

	cin>>tc;

	long long int n,k;
	
	
	while(tc--){
		cin>>n>>k;
		long long int a[k+100];
		long long int i,j=0,x=0;

	    for(i=1; ;i++){

		    if(i%n!= 0 && j!=k) {
		    	a[j++]=i;
		    	cout << a[j++];
		 
		    }
	    }
	    cout<< a[k-1] << endl;
    }
}