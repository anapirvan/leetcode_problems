 class Solution {
 public:
     vector<vector<int>> combinationSum2(vector<int>& candidates, int target)
     {
         vector<vector<int>> res;
         vector<int> sol_partial;
         sort(candidates.begin(), candidates.end());
         bkt(candidates, 0, target, sol_partial, res, 0);
         return res;
     }
     void bkt(vector<int>& candidates, int sum, int target, vector<int>& sol_partial, vector<vector<int>>& res, int idx)
     {
         if (sum == target)
         {
             res.push_back(sol_partial);
             return;
         }
         for (int i = idx;i < candidates.size();i++)
         {
             if (i > idx && candidates[i] == candidates[i - 1])
                 continue;
             if (sum + candidates[i] <= target)
             {
                 sol_partial.push_back(candidates[i]);
                 bkt(candidates, sum + candidates[i], target, sol_partial, res, i + 1);
                 sol_partial.pop_back();
             }
         }
     }
     
 };