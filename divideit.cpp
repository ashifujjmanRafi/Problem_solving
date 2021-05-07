#include <iostream>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int c1,c2,c3;
        c1=0;
        c2=0;
        c3=0;
        long long int n;
        cin>>n;    
        while(n%2==0){
            n=n/2;
            c1+=1;}
        while(n%3==0){
            n=n/3;
            c2+=1;}
        while(n%5==0){
            n=n/5;
            c3+=1;}
        if(n!=1)
            cout<<"-1"<<endl;
        else
            cout<<c1+(c2*2)+(3*c3)<<endl;
        
    }

}