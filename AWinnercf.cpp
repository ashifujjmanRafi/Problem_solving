#include <bits/stdc++.h>
using namespace std;
int main()
{
	
	int tc,max1=0,remind=0;
	vector<string> v;
	vector<int> x;
	string s;
	int n;

	cin>>tc;

	for (int i = 0; i < tc; ++i)
	{
		cin>>s>>n;
		v.push_back(s);
		x.push_back(n);
	}


	for (int i = 0; i < x.size(); ++i)
	{
		for (int j = i+1; j < x.size(); ++j)
		{
			if(v[i]==v[j]){
				

				x[j]=x[i]+x[j];
				i++;

			//cout<<x[j]<<" ";
			}
			
		}
		//cout<<x[i]<<endl;
	}


	for (int i = 0; i <v.size(); ++i)
	{
		if(x[i]>max1){
			max1=x[i];
			remind=i;
		}
	}

	cout<<v[remind]<<endl;
	
	return 0;
}