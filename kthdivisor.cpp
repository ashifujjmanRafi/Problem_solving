#include <bits/stdc++.h>
using namespace std;
#define llu unsigned long long

int main(){
llu x,k,a=0;
    cin >> x>>k;
llu arr[x/2+2];
    
   for (int i = 1; i <= sqrt(x); i++) { 
    if (x % i == 0&&i*i!=x){
        cout << i << x/i << endl;
        arr[a]=i;
        a++;}
    if (x % i == 0&&i*i==x){
        cout << i;
       arr[a]=i;
       a++;}
}
llu d=arr.size();
    sort(arr,arr+d);
    if(k>arr.size()) cout<<"-1";
    else cout<<arr[k-1];
    return 0;
}