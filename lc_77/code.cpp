class Solution {
public:
    vector<vector<int>> combine(int n, int k)
    {
        vector<vector<int>>res;
        vector<int> sol;
        bkt(res, sol, 0, n, k);
        return res;

    }
    void bkt(vector<vector<int>>& res, vector<int>& sol, int nr, int n, int k)
    {
        if (nr == k)
        {
            res.push_back(sol);
            return;
        }
        int i;
        if (!sol.empty())
            i = sol.back();
        else
            i = 0;
        for (i;i < n;i++)
        {
            sol.push_back(i + 1);
            bkt(res, sol, nr + 1, n, k);
            sol.pop_back();
        }

    }
};