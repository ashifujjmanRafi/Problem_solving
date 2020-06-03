#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b,x=0,max=0;
    cin>>t;
    while(t--){
        cin>>a>>b;
        x=x+b;
        x=x-a;
        if(x>max) max=x;
    }
    cout<<max;
}