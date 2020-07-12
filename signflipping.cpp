#include <bits/stdc++.h>
using namespace std;
int main()
{
	int tc,n;
	
	cin>>tc;
	while(tc--){
		cin>>n;
		//vector<long long int> v;
		int x;

		for (int i = 0; i < n; ++i)
		{
			cin>>x;

			if(i%2==0){

				if (x >= 0)
					cout << x<< " ";
				else
					cout << x * -1 << " ";
			}
			else{
				if(x<=0)
					cout<<x<<" ";
				else
					cout << x * -1 << " ";
			}
		}
		cout<<endl;
	
		
	}
	
	return 0;
}