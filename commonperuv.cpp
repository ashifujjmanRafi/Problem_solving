#include <bits/stdc++.h>
using namespace std;
int main()
{
	string x,y;
	vector<char> v;
	while(1){

		cin>>x>>y;
		int xs=x.size();
		int ys=y.size();
		int j=0;
		vector<char> v;

		//xs=min(xs,ys);
		sort(x.begin(), x.end());
		sort(y.begin(), y.end());

		for (int i = 0; i < xs; ++i)
		{
			for (int m = 0; m <ys; ++m)
			{
				if(x[i]==y[m]){

					v.push_back(x[i]);
					i++;
					m++;
				}
			}
			
		}
		//sort(v.begin(), v.end());
		for (int i = 0; i <v.size(); ++i)
		{
			cout<<v[i];

		}cout<<endl;
	}
	
	return 0;
}