#include <bits/stdc++.h>
using namespace std;
int main(){
    long long x,y;
    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++){
        cin>>x;
        y=x*(x-1);
        cout<< "Case "<<i+1<<": ";
        if(y%4==0) cout<< y/4;
        else cout << y/2;

    }
    return 0;
}