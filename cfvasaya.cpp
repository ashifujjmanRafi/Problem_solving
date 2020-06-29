#include <bits/stdc++.h>
using namespace std;
int main()
{
	int k,d;
	cin>>k>>d;

	//if(k==0)co

	
	

	if (k!=1&&d==0)
	{
		cout<<"No solution"<<endl;
		return 0;
		
	}
	else
    {
        for(int i =k; i >= 2; i--)
            printf("9");
        printf("%d\n",d);
    }

	
	return 0;
}