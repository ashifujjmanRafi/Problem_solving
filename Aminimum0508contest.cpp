#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,x,y;

	cin>>t;

	while(t--){

		cin>>n;

		vector<int> v;

		while(n--){
			cin>>x;
			v.push_back(x);
		}

		sort(v.begin(), v.end());

		bool flag=false;

		for(int i=1;i<v.size();i++)
    	{

       		y=abs(v[i]-v[i-1]);

       		if(y>=2)
       		{
        		flag=true;
     		}

   		}

   		 if(flag)
   		 	cout<<"NO"<<endl;
   		 else 
   		 	cout<<"YES"<<endl;
   		 
		v.clear();
	}
	
	return 0;
}