#include <bits/stdc++.h>
using namespace std;
int main()
{

	string str;

	getline(cin,str);

	int x,count =0 ;

	x=str.size();
	for (int i = 0;i<x; i++) 
        if (str[i] != ' ')
            str[count++] = str[i];
    //cout<< count;
    char ch=str[count-2];

	    if(ch=='A' || ch=='a' || ch=='E' || ch=='e' || ch=='I' || ch=='i' || ch=='O' || ch=='o' || ch=='U' || ch=='u' || ch=='Y' || ch=='y')
    {
		cout<<"YES"<<endl;
	}
	else 
		cout<<"NO"<<endl;
	
	return 0;
}