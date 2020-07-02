#include <bits/stdc++.h>
using namespace std;
int main()
{
	//s sized string can be written by two typer 1 can type in v1 sec 2*t1 , second so on
	
	int v1,v2,t1,t2,s,x,y,max;
	cin>>s>>v1>>v2>>t1>>t2;
	x=s*v1+2*t1;
	y=s*v2+2*t2;
	if(y>x)cout<<"First"<<endl;
	else if(x>y) cout<<"Second"<<endl;
	else cout<<"Friendship"<<endl;


	
	return 0;
}