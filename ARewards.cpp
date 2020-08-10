#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a1,a2,a3,a4=0;
	cin>>a1>>a2>>a3;

	a4=(a1+a2+a3);
	if(a4%5==0)
		a4=a4/5;
	else 
		a4=a4/5+1;
	cout<<a4<<endl;
	int b1,b2 ,b3,b4=0;
	cin>>b1>>b2>>b3;

	b4=b1+b2+b3;

	if(b4%10==0)
		b4=b4/10;
	else 
		b4=b4/10+1;
	cout<<b4<<endl;

	int n;
	cin>>n;

	if(n-(a4+b4) < 0)
		cout<<"NO"<<endl;
	else 
		cout<<"YES"<<endl;
	


	return 0;
}