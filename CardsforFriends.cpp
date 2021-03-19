#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int w, h, n, x = 1;
        cin >> w >> h >> n;
        int m = n;
        while (w % 2 == 0)
        {
            w = w / 2;
            x *= 2;
        }
        while (h % 2 == 0)
        {
            h = h / 2;
            x *= 2;
        }

        if (x >= n)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}
