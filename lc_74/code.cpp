 class Solution {
 public:
     bool searchMatrix(vector<vector<int>>& matrix, int target)
     {
         int n = matrix.size(), m = matrix[0].size(),i;
         for (i = 0;i < n;i++)
             if (target < matrix[i][m - 1])
                 break;
             else
                 if(target==matrix[i][m-1])
                    return true;
         if(i==n)
            return false;
         int l = 0, r = m - 1;
         while (l <= r)
         {
             int mij = (l + r) / 2;
             if (matrix[i][mij] == target)
                 return true;
             if (target < matrix[i][mij])
                 r = mij - 1;
             else
                 l = mij + 1;
         }
         return false;
     }
 };