 class Solution {
 public:
     void nextPermutation(vector<int>& nums) {
         int i = nums.size() - 1;
         while (i > 0 && nums[i] <= nums[i - 1])
             i--;
         if (i == 0)
             reverse(nums.begin(), nums.end());
         else
         {
             int j = nums.size() - 1;
             while (i <= j && nums[j] <= nums[i - 1])
                 j--;
             swap(nums[i - 1], nums[j]);
             reverse(nums.begin() + i, nums.end());
         }
     }
 };