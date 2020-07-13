#include <bits/stdc++.h>
using namespace std;
int main()
{
	int tc,n,x;

	//vector<int> v;

	cin>>tc;

	while(tc--){

		bool flag=true;

		cin>>n;

		vector<int> v;

		while(n--){
			cin>>x;
			v.push_back(x);
		}
		for (int i = 2; i < v.size(); ++i)
		{
			if(v[i-2]<v[i-1] && v[i-1]>v[i]){
				cout<<"YES"<<endl;
				cout<<i-1<<" "<<i<<" "<<i+1<<endl;
				flag=false;
				break;
			}
		}

		if(flag)
			cout<<"NO"<<endl;

	}
	
	return 0;
}