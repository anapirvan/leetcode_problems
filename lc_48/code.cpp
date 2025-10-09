 class Solution {
 public:
     void rotate(vector<vector<int>>& matrix)
     {
         int top = 0, bottom = matrix.size() - 1;
         while (top < bottom)
         {
             for (int i = 0;i < matrix.size();i++)
                 swap(matrix[top][i], matrix[bottom][i]);
             top++;
             bottom--;
         }

         for (int i = 0;i < matrix.size()-1;i++)
             for (int j = i+1;j < matrix[i].size();j++)
                 swap(matrix[i][j] , matrix[j][i]);
     }
 };