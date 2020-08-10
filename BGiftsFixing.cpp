#include <bits/stdc++.h>
using namespace std;
int main(){

	int t;

	cin>>t;

	while(t--){

		long long int a,b,n,min1=10000000000,min2=10000000000,sum=0,i,m;
		vector<long long int>a1;
		vector<long long int>b1;

		cin>>n;
		m=n;

		while(n--){
			cin>>a;
			a1.push_back(a);
			
			if(a<min1)
				min1=a;

		}

		while(m--){
			cin>>b;
		
			b1.push_back(b);

			if(b<min2)
				min2=b;

		}

		//cout<<min1<<"    "<<min2<<endl;


		for (i = 0; i < a1.size() ; ++i)
		{
			a1[i]=a1[i]-min1;
			b1[i]=b1[i]-min2;
			//cout<<a1[i]<<" "<<b1[i]<<endl;
			sum=sum+max(a1[i],b1[i]);
			//cout<<max(a1[i],b1[i])<<endl;
		}

		cout<<sum<<endl;
	}

	return 0;
}