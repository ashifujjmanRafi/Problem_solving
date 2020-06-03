#include <bits/stdc++.h>
using namespace std;
int main(){
    string str[100];
    str[0] = "Happy";
    str[1] = "birthday";
    str[2] = "to";
    str[3] = "you";
    str[4] = "Happy";
    str[5] = "birthday";
    str[6] = "to";
    str[7] = "you";
    str[8] = "Happy";
    str[9] = "birthday";
    str[10] = "to";
    str[11] = "Rujia";
    str[12] = "Happy";
    str[13] = "birthday";
    str[14] = "to";
    str[15] = "you";
    str[16] = "ss";   
    int x,c=0;
    int i=0,j=0,b=0;
    cin>>x;
    string s2[10];
    while(x--){
        cin>>s2[b];
        b++;
    }
    while(str[j]!="ss"){
        cout<<s2[i++]<<": "<<str[j++]<<endl;
        if(i==x){
            i=0;
            c=1;

        }
        if( str[j]=="ss" && c==0){
            j=0;
        }

    }
    return 0;

}