class Solution {
public:
    int searchInsert(vector<int>& nums, int target)
    {
        int left = 0, right = nums.size() - 1;
        while (left <= right)
        {
            int m = (left + right) / 2;
            if (target < nums[m])
                right = m - 1;
            else
                if (target > nums[m])
                {
                    left = m + 1;
                }
                else
                    return m;
        }
        return left;
    }
};