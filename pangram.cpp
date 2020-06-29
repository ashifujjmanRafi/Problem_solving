#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char s[n+1];

	for (int i = 0; i < n; ++i)
	{
		cin>>s[i];
		if(s[i]>='A'&&s[i]<='Z'){
			s[i]=s[i]+32;
		}
	}
	sort(s,s+n);
	int x=0;
	for(int i=0;i<n;i++){
		if(s[i]!=s[i+1]) x++;
	}
	if(x==26)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}