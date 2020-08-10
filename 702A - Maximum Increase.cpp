#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x,y,max1=0,count=1,co=1;
	cin>>x;
	vector<int> v;

	while(x--){

		cin>>y;
		v.push_back(y);
	}

	for (int i = 1; i <v.size(); ++i)
	{
		if(v[i]>v[i-1]){
			count++;
		}
		else{

			if(count>max1){
				max1=count;
			}
			count=1;
		}
	}
	if(count>max1){
		max1=count;
	}
	cout<<max1<<endl;


	return 0;
}