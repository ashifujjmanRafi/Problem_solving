#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,k,x=0,y=0,i;
    cin>>n>>k;
    long long int ae[n];
    if(n%2==0)x=n/2;
    else x=(n/2)+1;
   
    for(i=1;i<=n;i++){
        if(i%2!=0) {
            ae[y++]=i;
            }
        else ae[x++]=i;

        }
    cout<<ae[k-1];
return 0;
            

}
