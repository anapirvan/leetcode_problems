class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        vector<vector<bool>> dp(n,vector<bool>(n,false));
        int i, p1 = 0, p2 = 0;
        for (i = 0;i < n;i++)
            dp[i][i] = true;
        for(i=0;i<n-1;i++)
            if (s[i] == s[i + 1])
            {
                dp[i][i + 1] = true;
                p1 = i; p2 = i + 1;
            }
        for(int dif=2;dif<n;dif++)
            for (i = 0;i < n - dif;i++)
            {
                int j = i + dif;
                if (s[i] == s[j] && dp[i + 1][j - 1])
                {
                    dp[i][j] = true;
                    p1 = i; p2 = j;
                }
            }
        return s.substr(p1, p2 - p1 + 1);
    }
};