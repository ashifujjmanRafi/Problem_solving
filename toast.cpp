#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, k, l, c, d, p, nl, np,min1,mal,lemo,salt;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;

	mal=(k*l)/(n*nl);
	lemo = c*d/n;
	salt=p/(n*np);
	min1=min(mal,lemo);
	min1=min(min1,salt);
	cout<<min1<<endl;

	
	return 0;
}