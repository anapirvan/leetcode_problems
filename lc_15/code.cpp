class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        vector<vector<int>> res;
        if (nums.size() == 3)
        {
            if (nums[0] + nums[1] + nums[2] == 0)
                res.push_back(nums);
            return res;
        }

        sort(nums.begin(), nums.end());
        for (int i = 0;i < nums.size()-1;i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int j = i + 1, k = nums.size() - 1;
            while (j < k)
            {
                int s = nums[i] + nums[j] + nums[k];
                if (s > 0)
                    k--;
                else
                    if (s < 0)
                        j++;
                    else
                    {
                        res.push_back({ nums[i],nums[j],nums[k] });
                     
                        while (j<k && nums[j] == nums[j + 1])
                            j++;
                        j++;
                    }
            }
        }
        return res;
    }
};
