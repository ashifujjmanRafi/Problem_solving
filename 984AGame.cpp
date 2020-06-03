#include <bits/stdc++.h>
using namespace std;
int main(){
    //cout << "take input";
    int n;
    cin>>n;
    int listn[n];
    for(int i=0; i< n;i++)
    {
        cin>> listn[i];
    }
    //sort(listn,listn+n);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++)
        {
            if(listn[j]<listn[i]) swap(listn[j],listn[i]);
        }
    }
    cout<<listn[(n-1)/2];
    return 0;

    
}