#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int c;
    cin>>c;
    
    vector<vector<int>> nums1;

    for (int i = 0; i < c; i++)
    {
        vector<int> nums2;
        for (int i = 0; i < 3; i++)
        {
            int a;
            cin>>a;
            nums2.push_back(a);
        }
        nums1.push_back(nums2);    
    }
    int output=0;

    for (int i = 0; i < nums1.size(); i++)
    {
        int max=0;

        for (int j = 0; j < nums1[i].size();j++)
        {
            max += nums1[i][j];
            
        }
        cout<<max<<endl;

        if(max > output){
            
            output = max;
        }
        
        cout<<endl;
        
        
    }

    cout<<output<<endl;
    
    
    
    return 0;
}
