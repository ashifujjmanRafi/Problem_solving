#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int x=1;
	int arr1[39]={0};
	string s1;
	//s1={abcdefghijklmnopqrstuvwxyz};

	sort(s.begin(),s.end());

	for (int i = 0; i <s.size(); ++i)
	{

        char c=s[i];
        if(c=='a')
        {
            arr1[0]=arr1[0]+1;
        }
        else if(c=='b')
        {
            arr1[1]=arr1[1]+1;
        }
        else if(c=='c')
        {
            arr1[2]=arr1[2]+1;
        }
        else if(c=='d')
        {
            arr1[3]=arr1[3]+1;
        }
        else if(c=='e')
        {
            arr1[4]=arr1[4]+1;
        }
        else if(c=='f')
        {
            arr1[5]=arr1[5]+1;
        }
        else if(c=='g')
        {
            arr1[6]=arr1[6]+1;
        }
        else if(c=='h')
        {
            arr1[7]=arr1[7]+1;
        }
        else if(c=='i')
        {
            arr1[8]=arr1[8]+1;
        }
        else if(c=='j')
        {
            arr1[9]=arr1[9]+1;
        }
        else if(c=='k')
        {
            arr1[10]=arr1[10]+1;
        }
        else if(c=='l')
        {
            arr1[11]=arr1[11]+1;
        }
        else if(c=='m')
        {
            arr1[12]=arr1[12]+1;
        }
        else if(c=='n')
        {
            arr1[13]=arr1[13]+1;
        }
        else if(c=='o')
        {
            arr1[14]=arr1[14]+1;
        }
        else if(c=='p')
        {
            arr1[15]=arr1[15]+1;
        }
        else if(c=='q')
        {
            arr1[16]=arr1[16]+1;
        }
        else if(c=='r')
        {
            arr1[17]=arr1[17]+1;
        }
        else if(c=='s')
        {
            arr1[18]=arr1[18]+1;
        }
        else if(c=='t')
        {
            arr1[19]=arr1[19]+1;
        }
        else if(c=='u')
        {
            arr1[20]=arr1[20]+1;
        }
        else if(c=='v')
        {
            arr1[21]=arr1[21]+1;
        }
        else if(c=='w')
        {
            arr1[22]=arr1[22]+1;
        }
        else if(c=='x')
        {
            arr1[23]=arr1[23]+1;
        }
        else if(c=='y')
        {
            arr1[24]=arr1[24]+1;
        }
        else if(c=='z')
        {
            arr1[25]=arr1[25]+1;
        }	
	}
	for (int i = 0; i <26; ++i)
	{
		if(arr1[i]%2!=0)
			cout<<s1[i];
	}
	cout<<endl;
	
	return 0;
}