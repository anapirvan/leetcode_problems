class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 1, n = nums.size(), p = 1;
        while (i < n)
        {
            if (nums[i] != nums[i - 1])
            {
                nums[p] = nums[i];
                p++;
            }
            i++;
        }
        return p;
    }
};