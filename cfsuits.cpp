#include <bits/stdc++.h>
using namespace std;
int main()
{
	std::vector<int> v;
	int x,y=6,max1,min1,am1,am2,z,min2;
	while(y--){
		cin>>x;
		v.push_back(x);
	}
	//max1=max(v[4],v[5]);
	
	if(v[4]>v[5]){
		min1=min(v[0],v[3]);
		am1=min1*v[4];

		z=v[3]-min1;
			
		min2=min(v[1],v[2]);
		min2=min(min2,z);
		am2=min2*v[5];
	}
	else
	{
		min1=min(v[1],v[2]);
		min1=min(min1,v[3]);

		am1=min1*v[5];

		z=v[3]-min1;
		min2=min(v[0],z);
		am2=min2*v[4];
	}

	cout<<am1+am2<<endl;



	
	return 0;
}