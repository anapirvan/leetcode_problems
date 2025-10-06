class Solution {
public:
    string countAndSay(int n) {
        string res = "1";
        for (int i = 2;i <= n;i++)
            res = calc(res);
        return res;
    }
    string calc(string s)
    {
        int count = 1;
        string res;
        for (int i = 0;i < s.size() - 1;i++)
            if (s[i] == s[i + 1])
                count++;
            else
            {
                res += to_string(count) + s[i];
                count = 1;
            }
        res += to_string(count) + s.back();
        return res;
    }
};