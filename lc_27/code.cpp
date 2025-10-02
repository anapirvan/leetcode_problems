class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0, n = nums.size(), p = 0;
    while (i < n)
    {
        if (nums[i] != val)
        {
            nums[p] = nums[i];
            p++;
        }
        i++;
    }
    return p;
    }
};