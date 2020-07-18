#include <bits/stdc++.h>
using namespace std;
int main()
{

    int k, b, n, t;
    cin >> k >> b >> n >> t;

    long long int x = 1;

    int i = 0;
    
    for (;i<=n; i++){
        if (x > t) 
        	break;
        x = x*k + b;
    }
    cout << n - i + 1 << endl;
    return 0;
}