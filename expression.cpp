#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,max=0;
	cin>>a>>b>>c;
	int r[9];
	
	r[0] = a*b+c;
    r[1] = a+b*c;
    r[2] = a*(b+c);
    r[3] = (a+b)*c;
    r[4] = a+b+c;
    r[5] = a*b*c;



	for(int i=0;i<6;i++){

		if(r[i]>max) max=r[i];

	}
	cout<<max;

	return 0;
}