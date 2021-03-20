#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int goods;
        cin >> goods;
        int price[goods];
        long long int out = 0;
        for (int i = 0; i < goods; i++)
        {
            cin >> price[i];
            out += price[i];
        }
        

        cout<<(out+goods-1)/goods<<endl;
    }
}