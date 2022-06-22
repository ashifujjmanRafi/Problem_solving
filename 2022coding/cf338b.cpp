#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    for(int i =0;i<x;i++){
        int a,b;
        cin>>a>>b;
        int ans=0;
        int x;
        for(int j=0;j<a;j++){
            cin>>x;
            ans+=x; 
        }
        if(b>ans){
            cout<<0<<endl;
        }
        else
            cout<<ans-b<<endl;
    }



}