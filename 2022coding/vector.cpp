class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int x=nums.size();
        int num[x];
        
        for(int i=0;i<nums.size();i++){
            
            num[i]=nums[nums[i]];
        }
        nums.clear();
        
        for (int i = 0; i <x; i++)
            nums.push_back(num[i]);
        
        
        return nums;
        
    }
};