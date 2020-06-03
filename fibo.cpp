#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,s=0,t1=1,t2=1,nextt=0;
    cin>>t;

    for(int i=3;i<=t;i++){
        
        int nextt=t1+t2;
        t1=t2;
        t2=nextt;
        s=s+nextt;
    }
    cout<<s+2;
    return 0;

}