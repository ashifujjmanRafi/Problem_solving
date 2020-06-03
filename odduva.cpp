#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,a,b,sum=0,x=1;
    cin >> tc;

    while(tc--){

        cin>>a>>b;

    sum=0;
    for(int i=a;i<=b;i++){
        if(i%2!=0){
            sum=sum+i;
        }
    }
    cout<<"Case "<< x <<": "<< sum <<endl;
     x++;
    
    
    
    }
return 0;
}