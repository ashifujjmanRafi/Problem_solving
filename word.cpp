#include<bits/stdc++.h>
using namespace std;
int main(){
    string input;
    cin>>input;
    int up=0,low=0;
    for(int i=0;i<input.size();i++){

        if(input[i]>='a'&&input[i]<='z') low++;
        else up++;
    }


    if(up>low){

        for(int i=0;i<input.size();i++){
        if(input[i]>='a'&& input[i]<='z') 
        {
            input[i]=input[i]-32;
        }

    }

    }
    else{
        for(int i=0;i<input.size();i++){
        if(input[i]>='A'&&input[i]<='Z') {

            input[i]=input[i]+32;

        }
        
    }
    }

    cout<<input<<endl;



return 0;
}