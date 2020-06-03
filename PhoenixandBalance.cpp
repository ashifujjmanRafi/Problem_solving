#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc,x,y=0,z=0;
    cin>>tc;
    while(tc--){
        cin>>x;
        y=0;
        z=0;
        for(int i=1;i<x/2;i++){
            y=y+pow(2,i);
        } y=y+pow(2,x);

        for(int j=x/2;j<x;j++){
            z=z+pow(2,j);
        }

        cout<< (y-z)<< endl;

    }
}