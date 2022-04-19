/*Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.

Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 2.

The tests are generated such that there is exactly one solution. You may not use the same element twice.

*/
class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {

        vector<int> ans;

        int lo = 0;

        int hi = numbers.size() - 1;

        while (lo < hi)
        {

            int l = numbers[lo];

            int h = numbers[hi];

            if (l + h == target)
            {

                ans.push_back(lo + 1);
                ans.push_back(hi + 1);
                // break;
                return ans;
            }
            else if (l + h < target)

                lo++;

            else

                hi--;
        }
        return ans;
    }
};