class Solution {
public:
    int romanToInt(string s)
    {
        int num = 0,i;
        unordered_map<char, int> map = { {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000} };
        for (i = 0;i < s.length() - 1;i++)
            if (map[s[i]] < map[s[i + 1]])
                num -= map[s[i]];
            else
                num += map[s[i]];
        return num+map[s[i]];
    }
};