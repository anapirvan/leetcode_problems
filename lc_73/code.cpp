class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix)
    {
        int n = matrix.size(), m = matrix[0].size();
        bool first_row_has0 = false, first_col_has0 = false;
        for(int i=0;i<n;i++)
            if (matrix[i][0] == 0)
            {
                first_col_has0 = true;
                break;
            }
        for (int j = 0;j < m;j++)
            if (matrix[0][j] == 0)
            {
                first_row_has0 = true;
                break;
            }

        for(int i=1;i<n;i++)
            for(int j=1;j<m;j++)
                if (matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
        for (int i = 1;i < n;i++)
            if (matrix[i][0] == 0)
                for (int j = 1;j < m;j++)
                    matrix[i][j] = 0;
        for (int j = 1;j < m;j++)
            if (matrix[0][j] == 0)
                for (int i = 1;i < n;i++)
                    matrix[i][j] = 0;

        if (first_col_has0)
            for (int i = 0;i < n;i++)
                matrix[i][0] = 0;
        if (first_row_has0)
            for (int j = 0;j < m;j++)
                matrix[0][j] = 0;

        for (int i = 0;i < n;i++)
        {
            for (int j = 0;j < m;j++)
                cout << matrix[i][j] << " ";
            cout << endl;
        }
    }
};