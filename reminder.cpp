#include <bits/stdc++.h>
using namespace std;
int main()
{
	int tc;
	cin>>tc;

	while(tc--){

		int x,y,n,z=0;
		cin>>x>>y>>n;

		if (n - n % x + y <= n) {
			cout << n - n % x + y << endl;
		} else {
			cout << n - n % x - (x - y) << endl;
		}
	}
	
	return 0;
}