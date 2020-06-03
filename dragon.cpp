#include <bits/stdc++.h>
using namespace std;
int main(){
	int s,n,j=0;
	cin>>s>>n;
	int a[n],b[n];
	for (int i = 0; i <n; ++i)
	{
		cin>>a[i]>>b[i];
		//cout<<a[i]<<b[i]<<endl;
	}

	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				swap(a[j],a[i]);
				swap(b[j],b[i]);
			}
		}
	}
	int i=0;
	for(i=0; i<n; i++)
    {
        if(s>a[i])
        {
            j++;
        }
        s+=b[i];
    }

	if(j==n)
	    cout<<"YES";
	else 
		cout<<"NO";
	return 0;

}
