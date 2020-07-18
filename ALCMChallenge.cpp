#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int n;

	cin>>n;

	if(n<=3) {
		if(n==1)
			cout<<1;
		else if(n==2)
			cout<<2;
		else
			cout<<6;
	
	}
	else{
		if(n%2==0){
			if(n%3==0)
                cout<<(n-1)*(n-2)*(n-3);
            else
                cout<<n*(n-1)*(n-3);
		}
		else{
			cout<<(n-1)*(n-2)*n<<endl;
		}

	}
	return 0;
}