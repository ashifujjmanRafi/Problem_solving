#include <bits/stdc++.h>
using namespace std;
int main()

{
	int tc, x=0,y,z=0,m,j;
	cin>>tc;
	std::vector<int> v;
	while(tc--){
		cin>>j;
		v.push_back(j);

	}
	for (int i = 0; i <v.size(); ++i)
	{
		if(v[i]%2==0){
			x++;
			y=i;
		}

		else{

			z++;
			m=i;
		}
	}
	cout<<x<<z;
	if(x==1)
		cout<<y+1<<endl;
	else if(z==1)
		cout<<m+1<<endl;
	
	return 0;
}