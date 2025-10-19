class Solution {
public:
    int minPathSum(vector<vector<int>>& grid)
    {
        int dp[200][200];
        int n = grid[0].size(), m = grid.size();

        dp[0][0] = grid[0][0];

        for (int j = 1;j < n;j++)
            dp[0][j] = grid[0][j] + dp[0][j - 1];
        for (int i = 1;i < m;i++)
            dp[i][0] = grid[i][0] + dp[i - 1][0];

        for (int i = 1;i < m;i++)
            for (int j = 1;j < n;j++)
                dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + grid[i][j];
        /*for (int i = 0;i < m;i++)
        {
            for (int j = 0;j < n;j++)
                cout << dp[i][j] << " ";
            cout << endl;
        }*/

        return dp[m - 1][n - 1];
    }
};