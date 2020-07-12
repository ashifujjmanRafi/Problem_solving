#include <bits/stdc++.h>
 
 
using namespace std;
 
int main()
{
    long long int n;
 
    cin>>n;
 
    long long int a[n], i;
 
    for(i = 0; i < n; i++) {
        cin>>a[i];
    }
    sort(a,a+i);
 
    long long int b = a[0],countb = 0;
    long long int c = a[i-1], countc = 0;;
 
    for(long long int j = 0; j < n; j++) {
        if(b == a[j]) countb++;
        if(c == a[j]) countc++;
 
    }
    if(b==c) {
        cout<<abs(c-b)<<" "<<n * (n - 1) / 2<<endl;
    } else {
        cout<<abs(c-b)<<" "<<(countb * countc)<<endl;
    }
 
    return 0;
}
