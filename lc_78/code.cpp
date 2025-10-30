class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums)
    {
        vector<vector<int>> res;
        vector<int> sol;
        bkt(nums,res, sol, 0);
        return res;
    }
    void bkt(vector<int>& nums, vector<vector<int>>& res, vector<int>& sol, int idx)
    {
        if (idx == nums.size())
        {
            res.push_back(sol);
            return;
        }
        sol.push_back(nums[idx]);
        bkt(nums, res, sol, idx + 1);

        sol.pop_back();
        bkt(nums, res, sol, idx + 1);
    }
};