#include <bits/stdc++.h>
using namespace std;


double gcd(double a, double b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 
   
// Driver program to test above function 
int main() 
{ 
    double a , b ; 
    cin>>a>>b;
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a, b); 
    return 0; 
} 
