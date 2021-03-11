#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int a,b,c,x;
    cin>>a>>b>>c;
    b=b/2;
    c=c/4;
    x = min(a,min(b,c));
    
    cout<<x*7;
    return 0;


}