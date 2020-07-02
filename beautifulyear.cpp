#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a=0,b=0,c=0,d=0;
	//vector<int> v;
	cin>>n;
	n=n+1;


	while(1){

		

		a=n/1000;
		b=(n/100)%10;
		c=(n/10)%10;
		d=n%10;

		if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){

			break;
		}
		else n++;

				
	}

	cout<<n<<endl;

	
	return 0;
}