class Solution {
public:
    int maxSubArray(vector<int>& nums)
    {
        int sum_max = nums[0], sum = 0;
        
        for (int x : nums)
        {
            if (sum < 0)
            {
                sum = 0;
            }
            sum += x;
            sum_max = max(sum_max, sum);
        }
        return sum_max;
    }
};