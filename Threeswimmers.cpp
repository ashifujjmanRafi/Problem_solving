#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long int p, a, b, c;
        cin >> p >> a >> b >> c;
        if (p % a == 0 || p % b == 0 || p % c == 0)
        {
            cout<<"0"<<endl;

        }
        else
        {
            cout<<min({a - p % a, b - p % b, c - p % c})<<endl;
        }

        
    }
}