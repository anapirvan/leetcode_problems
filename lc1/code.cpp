class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target)
    {
        if (nums.size() == 3)
           return nums[0] + nums[1] + nums[2];
       

        sort(nums.begin(), nums.end());
        int sumtarget = nums[0] + nums[1] + nums[2];

        int sum;
        for (int i = 0;i < nums.size()-1;i++)
        {
            int j = i + 1, k = nums.size() - 1;
            while (j < k)
            {
                sum = nums[i] + nums[j] + nums[k];
                if (abs(target - sum) < abs(target - sumtarget))
                    sumtarget = sum;
                if (sum > target)
                    k--;
                else
                    if (sum < target)
                        j++;
                    else
                        return sum;
            }
           
        }
        return sumtarget;
    }
};