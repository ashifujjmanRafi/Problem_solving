#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int tc,fm;
	cin>>tc;
	while(tc--){

		cin>>fm;

		long long int sum=0;
		while(fm--){

			int a,b,c;

			cin>>a>>b>>c;

			sum+=a*c;

		}

		cout<<sum<<endl;
	}







	return 0;
}