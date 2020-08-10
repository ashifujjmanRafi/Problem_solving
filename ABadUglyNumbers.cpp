#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x,y;
	cin>>x;
	while(x--){
		
		cin>>y;
		if(y==1)
			cout<<-1<<endl;
		else{
			cout<<2;
			y=y-1;
			while(y--){
				cout<<3;
			}
			cout<<endl;
		}

	}
	
	return 0;
}