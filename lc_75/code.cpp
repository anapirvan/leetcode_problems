 class Solution {
 public:
     void sortColors(vector<int>& nums)
     {
         int nr0 = 0, nr1 = 0, nr2 = 0, n = nums.size();
         for (int i = 0;i < n;i++)
             if (nums[i] == 0)
                 nr0++;
             else
                 if (nums[i] == 1)
                     nr1++;
                 else
                     nr2++;
         int p0 = 0, p1 = nr0, p2 = p1 + nr1;
         for (int i = 0;i < p1;i++)
             nums[i] = 0;
         for (int i = p1;i < p2;i++)
             nums[i] = 1;
         for (int i = p2;i < n;i++)
             nums[i] = 2;
         for (int x : nums)
             cout << x << " ";
     }
 };