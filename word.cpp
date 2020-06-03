#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    string input;
    cin>>input;
    int up=0,low=0;
    for(int i=0;i<input.size();i++){
        if(input[i]>='a'&&input[i]<='z') low++;
        else up++;
    }
    if(up>low) cout<<strupr(input);
    else if(low>up) cout<<strlwr(input);
    else cout<<strlwr(input);



return 0;
}