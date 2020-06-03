#include <bits/stdc++.h>
using namespace std;
 int main(){
     int x;
     cin>>x;
     long long int a,b;
     while(x--){
         cin>>a>>b;
         if(a>b) cout<<">"<<endl;
         else if(a==b) cout<< "="<<endl;
         else cout<<"<"<<endl;

     }
return 0;
 }