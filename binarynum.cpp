#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y,z=0;
    
    string v;
    cin>>x>>v;
    for(int i=0;i<x;i++){
        
        if(v[i]=='1') z++;

    }
    if(z==0) cout<<v;
    else{
        cout<<"1";
        for(int i=0;i<(x-z);i++)
        {
            cout<<"0";
        }    
        }

return 0;

}