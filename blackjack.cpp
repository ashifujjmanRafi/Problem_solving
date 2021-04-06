#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    //n = n - 10;
    if (n < 10)
        cout << 0 << endl;
    else
    {
        n = n - 10;
        if (n == 0 || n > 11)
            cout << 0 << endl;
        else if (n == 10)
        {
            cout << 15 << endl;
        }
        else
            cout << 4 << endl;
    }
    return 0;
}
