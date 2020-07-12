#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int count=0;
	for (int i = 0; i <s.size(); ++i)
	{
		if (s[i]>='a'&&s[i]<='z')
		{
			if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
				count++;
		    }
		}
		else{
			int a = s[i]-48;
			//cout<<a<<endl;
			if(a%2)count++;

		}
		
		

	}
	cout<<count<<endl;

	return 0;
}