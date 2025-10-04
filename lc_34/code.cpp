class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
        vector<int> res(2);
        res[0] = binarySearch(nums, target, true);
        res[1] = binarySearch(nums, target, false);
        return res;
    }
    int binarySearch(vector<int>& nums, int target, bool leftMost)
    {
        int idx=-1, left = 0, right = nums.size() - 1;
        while (left <= right)
        {
            int m = (left + right) / 2;
            if (target < nums[m])
                right = m - 1;
            else
                if (target > nums[m])
                    left = m + 1;
                else
                {
                    idx = m;
                    if (leftMost)
                        right = m - 1;
                    else
                        left = m + 1;
                }
        }
        return idx;
    }
};