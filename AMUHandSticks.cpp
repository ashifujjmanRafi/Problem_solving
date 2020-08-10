#include <bits/stdc++.h>
using namespace std;
int main()
{
	int max1=0,n,min1=0;
	int ar[10]={0};

	for (int i = 0; i < 6; ++i)
	{
		cin>>n;
		ar[n]++;
		max1=max(ar[n],max1);
		

		
	}
	//cout<<max1<<min1<<endl;
	for (int i = 0; i < 9; ++i)
	{
		if(ar[i]==1)min1=1;
	}

	if(max1>=4){
		if(min1==1)
			cout<<"Bear"<<endl;
		else
			cout<<"Elephant"<<endl;


	}
	else
	{
		cout<<"Alien"<<endl;

	}




	
	//
	//cout<<"Bear"<<endl;
	//

	return 0;
}