class Solution {
public:
    int totalNQueens(int n)
    {
        vector<vector<string>> res;
        vector<string> sol(n, string(n, '.'));
        bkt(n, res, sol, 0);
        return res.size();
    }
    void bkt(int n, vector<vector<string>>& res, vector<string>& sol, int col)
    {
        if (col == n)
        {
            res.push_back(sol);
            return;
        }
        for (int row = 0;row < n;row++)
            if (canPlace(sol, row, col,n))
            {
                sol[row][col] = 'Q';
                bkt(n, res, sol, col + 1);
                sol[row][col] = '.';
            }
    }
    bool canPlace(vector<string>& sol, int row, int col,int n)
    {
        for (int i = 0;i < row;i++)
            if (sol[i][col] == 'Q')
                return false;
       for (int j = 0;j < col;j++)
            if (sol[row][j] == 'Q')
                return false;
        int r = row - 1, c = col - 1;
        while (r >= 0 && c >= 0)
        {
            if (sol[r][c] == 'Q')
                return false;
            r--; c--;
        }
        r = row + 1; c = col - 1;
        while (c >= 0 && r<n)
        {
            if (sol[r][c] == 'Q')
                return false;
            r++; c--;
        }
        return true;
    }
};