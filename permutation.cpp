#include <bits/stdc++.h>
using namespace std;
int main()
{
	int tc,n,x;

	bool flag;

	vector<int> v;

	cin>>tc;

	while(tc--){

		cin>>n;

		while(n--){

			cin>>x;

			v.push_back(x);
		}

		int s=-1,d=-1,f=-1;


		for (int i = 2 ; i < v.size(); ++i)
		{
			if(v[i-1]<v[i] && v[i]>v[i+1]){

				s=i-1;
				d=i;
				f=i+1;
				break;

		    }
		}

		if(s!=-1){

			cout<<"YES"<<endl;

			cout<< s<< " "<< d<<" "<<f<<endl;

		}

		else 
			cout<<"NO"<<endl;
	}
	
	return 0;
}