#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x=0,y;
	string s;
	
	cin>>s;
	y=s.size();
	stack<char>g;
	for (int i = 0; i <s.size(); ++i)
	{
		if(s[i]=='(')
			//x++;
			g.push(s[i]);
		if(!g.empty()){
			if(s[i]==')'&&g.top()=='('){
				x++;
				g.pop();
			}
		}


		/*else 
			x--;

		if(x<0){
			x=0;
			y--;

		}*/
	}
	cout<<x*2<<endl;
	
	return 0;
}