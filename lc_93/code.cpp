class Solution {
public:
    vector<string> restoreIpAddresses(string s)
{
    vector<string> res;
    int len = s.length();
    if (len > 12)
        return res;

    for(int i=1;i<=3;i++)
        for(int j=1;j<=3;j++)
            for (int k = 1;k <= 3;k++)
                if (i + j + k<len && i + j + k + 4>len)
                {
                    string a = s.substr(0, i);
                    string b = s.substr(i, j);
                    string c = s.substr(i + j, k);
                    string d = s.substr(i + j + k);

                    if (check(a) && check(b) && check(c) && check(d))
                        res.push_back(a + '.' + b + '.' + c + '.' + d);
                }
    return res;
}
bool check(string s)
{
    int len = s.length();
    if (len == 1)
        return true;
    if (s.length() > 3)
        return false;
    if (s[0] == '0' && len > 1)
        return false;
    if (stoi(s) > 255)
        return false;
    return true;
}
};