#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;

	if(s.size()<2){
		cout<<"0"<<endl;
		return 0;
	}

	int count=0,x=11;

	while(x>=10){
		x=0;
		for (int i = 0; i <s.size(); ++i)
		{
			x+=s[i]-48 ;
		}
		s= to_string(x);
		count++;
	}
	cout<<count<<endl;
	
	return 0;
}