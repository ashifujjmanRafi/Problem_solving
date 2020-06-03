#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int x,y,x2,y2,car=0,a=0;
	while(cin>>x>>y){

		if ( !x && !y) break;
		car=0;
		a=0;
		while(x||y){
			x2=x%10;
			y2=y%10;

			if((x2+y2+a)>=10){
				car++;
				a=1;
			}
			else
				a=0;

			x=x/10;
			y=y/10;


		}
		if(car==0) cout<<"No carry operation."<<endl;
		else if(car==1)cout<<car<<" carry operation."<<endl;
		else cout<<car<<" carry operations."<<endl;



		
	}



	return 0;
}