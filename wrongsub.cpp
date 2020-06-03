#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int x;
    int y;
    cin>>x>>y;
    while(y--){
        if(x%10==0)x=x/10;
        else x=x-1;
    }

        
    cout<<x;
    return 0;
}