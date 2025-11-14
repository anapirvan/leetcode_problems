class Solution {
public:
     vector<vector<int>> subsetsWithDup(vector<int>& nums)
 {
     vector<vector<int>> res;
     vector<int>sol;
     sort(nums.begin(), nums.end());
     bkt(res, sol, 0, nums);
     return res;
 }
 void bkt(vector<vector<int>>& res, vector<int>& sol, int i, vector<int>& nums)
 {
     if (i == nums.size())
     {
         res.push_back(sol); 
         return;
     }
     
     sol.push_back(nums[i]);
     bkt(res, sol, i + 1, nums);
     sol.pop_back();
     while (i + 1 < nums.size() && nums[i] == nums[i + 1])
         i += 1;

     bkt(res, sol, i + 1, nums);
 }
};