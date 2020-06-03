#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	string s[n];
	int x=0;
	for(int i=0;i<n;i++){

		
		cin>>s[i];


	}
	sort(s,s+n);

	for(int i=0 ;i< n; i++){

		
		if(s[0]==s[i]) x++;

	}
	if(x>(n-x)) cout<<s[0]<<endl;
	else cout<< s[x+1];


	return 0;
}