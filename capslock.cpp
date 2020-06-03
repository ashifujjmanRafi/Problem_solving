#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int x,y=0;
	x = s.size();
	for(int i=0;i<x;i++){
		if ( s[i]>='A'&& s[i] <='Z')
		{
			y++;
		}
	}
	

	if(y ==(x-1) && (s[0]>='a'&& s[0]<='z')){
		


		for(int i=1;i<x;i++){
			s[i]=s[i]+32;

            }

        
		s[0]=s[0]-32;

	}
	else if(y==x){

		for(int i=0;i<x;i++){
			s[i]=s[i]+32;

            }

	}

	

	cout<<s<<endl;



	return 0;
}