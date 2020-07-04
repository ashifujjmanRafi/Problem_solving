#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,x,max=0,y;
	cin>>n>>m;
	//std::vector<int> v;
	for (int i = 1; i <=n ; ++i)
	{
		cin>>x;
		if (x>m)
		{
			//max=x;
			max=i;
		}


	}

	
	if(max==0)
		cout<<n<<endl;
	else cout<<max<<endl;
	return 0;
}