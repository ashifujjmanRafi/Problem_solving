#include <bits/stdc++.h>
using namespace std;
int main()
{
	//functions time ttime and song number ,devu must sing all song (rest10min),then maximum joke (5min),else -1;
	int song,ttime,sum=0,x;
	cin>>song>>ttime;
	int i=(song-1)*10;;
	while(song--){
		cin>>x;
		sum=sum+x;
	}
	//cout<<sum;
	


	if(i+sum <=ttime ){

		cout<<(ttime-sum)/5<<endl;
	}
	else cout<<-1<<endl;

	
	return 0;
}