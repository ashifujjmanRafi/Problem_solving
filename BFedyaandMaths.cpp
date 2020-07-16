#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int x=s[s.size()-1]-48+10*(s[s.size()-2]-48);
	if(x%4==0)
		cout<<4<<endl;
	else 
		cout<<0<<endl;
	
	return 0;
}