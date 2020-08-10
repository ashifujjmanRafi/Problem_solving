#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	int x=5;
	bool m=false;
	cin>>s1;
	while(x--){

		cin>>s2;

		if(s1[0]==s2[0]||s1[1]==s2[1])
		{
			m=true;
		}

	}

	if(m)
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;


	return 0;
}