class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums)
    {
        vector<vector<int>> res;
        vector<int> sol;
        unordered_map<int, int> counter;
        for (int val : nums)
            counter[val]++;
        bkt(res, sol, 0, nums,counter);
        return res;
    }
    void bkt(vector<vector<int>>& res, vector<int>& sol, int n, vector<int>& nums, unordered_map<int,int>& counter)
    {
        if (n == nums.size())
        {
            res.push_back(sol);
            return;
        }
        for (auto& it:counter)
        {
            int count = it.second, val = it.first;
            if (count != 0)
            {
                sol.push_back(val);
                counter[val]--;
                bkt(res, sol, n + 1, nums,counter);
                sol.pop_back();
                counter[val]++;
            }

        }
    }
    
    
};