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
        sort(price,price+goods);
        for (int i = 0; i < goods; i++)
        {
            if (price[i] * goods >= out)
            {
                out = price[i];
                break;
                
            }
        }

        cout<<out<<endl;
    }
}