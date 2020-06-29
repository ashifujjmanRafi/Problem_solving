#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	cin>>x;
	//vector <string> v;
	string v;
	while(x--){
 
		cin>>v;
		//v.push_back(y);
		for (int i = 0; i <v.size(); ++i)
		{
			if(i==0){
				cout<<v[i];
			}
			else {
				if (v[i]==v[i+1])
				{
					cout<<v[i];
					i++;
				}
				else cout<<v[i];
 
			}
		}
		cout<<endl;
	}
	
	return 0;
}