#include <bits/stdc++.h>
using namespace std;
int main()
{
	int h1,m1,tc,count=1,x=0;
	std::vector<int> h;
	std::vector<int> m;
	cin>>tc;
	while(tc--){
		cin>>h1>>m1;
		h.push_back(h1);
		m.push_back(m1);

	}
	for (int i = 1; i < h.size(); ++i)
	{
		if(h[i-1]==h[i]&&m[i-1]==m[i])
			count++;

		else{

			x=max(x,count);

			count=1;

		}
	}
	cout<<max(x,count)<<endl;


	return 0;
}