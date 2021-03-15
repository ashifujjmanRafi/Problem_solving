#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    for(int i = 0;i<tc;i++){
        int add,j=0,k=0;
        cin>>add;
        k=add;
        add=add%10;

        while(k!=0){
            k=k/10;
            j++;
        }
        if(j==1)
            cout<<((add-1)*10)+1<<endl;
        else if(j==2)
            cout<<((add-1)*10)+3<<endl;
        else if(j==3)
            cout<<((add-1)*10)+6<<endl;
        else
            cout<<add*10<<endl;

    }

}