#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,a[3],x=1;
    cin >> t;
    while(t--){
        for(int i=0;i<3;i++) cin>>a[i];
        sort(a,a+3);
        cout<<"Case "<<x<<": "<<a[1]<<endl;
        x++;

    }
    return 0;

}