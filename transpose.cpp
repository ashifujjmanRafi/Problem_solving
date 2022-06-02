#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> a;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        vector<int> v;
        for(int j=0;j<m;j++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        a.push_back(v);
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
}