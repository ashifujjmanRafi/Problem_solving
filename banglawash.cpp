#include <bits/stdc++.h>
using namespace std;
int main()
{	
	int TC,n,B,T,A,W;
    char ch;
    cin >> TC;
    for(int t = 1; t <= TC; t++){
        cin >> n;
        B = T = A = W = 0;
        for(int i = 0; i < n; i++){
            cin >> ch;
            if(ch == 'W')W++;
            else if(ch == 'B')B++;
            else if(ch == 'T')T++;
            else if(ch == 'A')A++;
        }
        if(B == n || (B+A) == n && n != A)cout << "Case " << t << ": BANGLAWASH" << endl;
        else if(W == n || (W+A) == n && n != A)cout << "Case " << t << ": WHITEWASH" << endl;
        else if(B == W && n != A)cout << "Case " << t << ": DRAW " << W << " " << T << endl;
        else if(B > W)cout << "Case " << t << ": BANGLADESH " << B << " - " << W << endl;
        else if(B < W)cout << "Case " << t << ": WWW " << W << " - " << B << endl;
        else if(A == n)cout << "Case " << t << ": ABANDONED" << endl;
    }

}