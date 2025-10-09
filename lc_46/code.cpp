class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums)
    {
        vector<vector<int>> res;
        vector<int> sol;
        bkt(res, sol, 0, nums);
        return res;
    }
    void bkt(vector<vector<int>>& res, vector<int>& sol, int n, vector<int>& nums)
    {
        if (n == nums.size())
        {
            res.push_back(sol);
            return;
        }
        for (int val : nums)
        {
            sol.push_back(val);
            if (valid(sol))
                bkt(res, sol, n + 1, nums);
            sol.pop_back();
        }
    }
    bool valid(vector<int>& sol)
    {
        for (int i = 0;i < sol.size() - 1;i++)
            for (int j = i + 1;j < sol.size();j++)
                if (sol[i] == sol[j])
                    return false;
        return true;
    }
    
};