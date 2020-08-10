#include <bits/stdc++.h>
using namespace std;
int main()
{
	char ch,s1[31]= {'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};
	string s;
	cin>>ch;
	cin>>s;
	if(ch=='R'){
		for (int i = 0; i <s.size(); ++i)
		{
			for (int j = 0; j <30; ++j)
			{
				if(s[i]==s1[j]){
					cout<<s1[j-1];
					//i++;
				}
			}
			//cout<<endl;
		}
	}
	else
	{
		for (int i = 0; i <s.size(); ++i)
		{
			for (int j = 0; j <30; ++j)
			{
				if(s[i]==s1[j]){
					cout<<s1[j+1];
					//i++;
				}
			}
			//cout<<endl;
		}
	}
	
	return 0;
}