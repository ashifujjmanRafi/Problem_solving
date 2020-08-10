#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x=5,y,sum=0;
	while(x--){
		cin>>y;
		sum+=y;
	}
	if(sum%5==0&&sum!=0)
		cout<<sum/5<<endl;
	else 
		cout<<"-1"<<endl;
	return 0;
}