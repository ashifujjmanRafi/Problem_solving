#include <bits/stdc++.h>
using namespace std;
int main()
{
	int tc,m;
	
	cin>>tc;
	while(tc--){

		int n;

		cin>>m;
		n=m;

		string x,y;
		int count[26]={0};
		while(n--){
			
			cin>>x;
			y+=x;
		}
		for (int i = 0; i < y.size(); ++i)
		{
			if(y[i]>='a'&&y[i]<='z')
			{
				int a;
				a=y[i]-'a';
				count[a]++;

			}
		}
		bool flag =false;
		for (int i = 0; i < 26; ++i)
		{

			if(count[i]%m!=0)

				flag=true;
		}
		if(flag)
			cout<<"NO"<<endl;
		else 
			cout<<"YES"<<endl;
	}
	
	return 0;
}