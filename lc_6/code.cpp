class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows > s.size())
            return s;
        int idx = 0, dif = 1;
        vector<vector<char>>a(numRows);
        for (char c : s)
        {
            a[idx].push_back(c);
            if (idx == 0)
                dif = 1;
            if (idx == numRows - 1)
                dif = -1;
            idx += dif;
        }
        string res;
        for (int i = 0;i < numRows;i++)
            for (char c : a[i])
                res += c;
        return res;
    }
};