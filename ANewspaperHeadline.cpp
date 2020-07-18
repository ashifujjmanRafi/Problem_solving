#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	int count=0,i=0,j=0;
	for (i = 0; i < s2.size(); ++i)
	{
		for (j = 0; j <s1.size(); ++j)
		{
			if(s2[i]==s1[j]){
				i++;
				j=j+1;
				break;
			}
		}
		if(i>0&&j>0)
			count++;

	}
	cout<<count;
	return 0;
}