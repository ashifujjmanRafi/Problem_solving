#include <bits/stdc++.h>
using namespace std;

#define llu unsigned long long

int main (void)
{
    llu x,k,i;

   cin>>x>>k;
for (int i = 1; i < sqrt(x); i++) { 
    if (x % i == 0&&i*i!=x)
        cout << i << x/i << endl;
    if (x % i == 0&&i*i==x)
        cout << i << '\n';
}


    return 0;
}
