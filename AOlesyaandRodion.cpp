#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,t;
	cin>>n>>t;
	int a[n]={1};
	
	if(n==1&&t==10){
		cout<<-1;
	}

	else if(t!=10){
		for (int i = 0; i <n; ++i)
	    {
		    cout<<a[i]*t;
	    }
	}
	else
		for (int i = 0; i <n-1; ++i)
	    {
		    cout<<a[i]*t;
	    }
	cout<<endl;
	
	return 0;
}
