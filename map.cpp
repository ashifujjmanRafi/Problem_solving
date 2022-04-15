#include <bits/stdc++.h>
using namespace std;

int main(){
    //creat map
    map<string,int>mp;
    map <string,int>::iterator it;//creating iterator

    mp["one"]= 1;
    mp["alpha"]=10;

    // for(it=mp.begin();it!=mp.end();it++){
    //     cout<<it->first<<" "<<it->second<<endl;

    // }

    for(auto it : mp)
    {
        //no need to declare iterator 
        //map <string,int>::iterator it;//creating iterator
        cout<< it.first<<" "<<it.second << endl;

    }

    it = mp.find("alpha");
    cout << it->second << endl;

}