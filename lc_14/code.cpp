class Solution {
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        for (int j = 0;j < strs[0].length();j++)
        {
            int ch = strs[0][j];
            for (int i = 1;i < strs.size();i++)
                if (strs[i][j] != ch || j == strs[i].length())
                    return strs[0].substr(0, j);
        }
        return strs[0];
    }
};