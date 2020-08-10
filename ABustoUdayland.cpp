#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;

	cin>>n;

	getchar();

	bool flag=false;

	char s[n+1][6];
	
	for (int i = 0; i < n; ++i)
	{
		
		for (int j= 0; j <5; ++j)
		{
			cin>>s[i][j];
			
		}
		getchar();

	}
	for (int i = 0; i < n; ++i)
	{
		if(s[i][0]=='O' && s[i][1]=='O')
			{
				s[i][0]='+';
				s[i][1]='+';
				flag = true;
				break;

			}
		if(s[i][3]=='O' && s[i][4]=='O')
			{
				s[i][3]='+';
				s[i][4]='+';
				flag = true;
				break;

			}
		
	}



	if (flag)
	{
		cout<<"YES"<<endl;
		for (int i = 0; i <n; ++i)
		{
			for (int j = 0; j <5; ++j)
			{
				cout<<s[i][j];
				
			}
			cout<<endl;
		}
		
	}
	else
		cout<<"NO"<<endl;

	
	return 0;
}