class Solution {
public:
    int numDecodings(string s) {
    int len = s.length();
    vector<int>dp(len + 1, 0);

    dp[0] = 1;
    if (s[0] != '0')
        dp[1] = 1;
    for (int i = 2;i < len + 1;i++)
    {
        if (s[i-1] != '0')
            dp[i] += dp[i - 1];
        int nr = stoi(s.substr(i - 2, 2));
        if (nr >= 10 and nr <= 26)
            dp[i] += dp[i - 2];
    }
    return dp[len];
    }
};