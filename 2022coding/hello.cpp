// take a vector and take input from user and add it to the vector
// and then print the vector
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr;
    int n;
    cout << "Enter the number of elements in the vector: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cout << "Enter the element: ";
        cin >> x;
        arr.push_back(x);
    }

    vector<int> ans;

   class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        
        //set <int> s;
        
//         for(int i =0;i<arr.size();i++)
//             s.insert(arr[i]);
        
        map <int,int> ap;
        
        int rank=1;
        
        for(auto i : arr)
            ap[i]=0;
        
        for(auto i : ap)
            ap[i.first]=rank++;//map is sorted and working with unique value
        
        for(int i =0;i<arr.size();i++)
            arr[i]=ap[arr[i]];
        
    return arr;
    }
    
    

    cout << "The vector is: ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
