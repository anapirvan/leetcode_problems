
class Solution {
public:
    int myAtoi(string s) {
        int i = 0, res = 0, semn = 1, n = s.length();
        while (i < n && s[i] == ' ')
            i++;
        if (s[i] == '+')
            i++;
        else
            if (s[i] == '-')
            {
                semn = -1;
                i++;
            }
        while (i < n && isdigit(s[i]))
        {
            int digit = s[i] - '0';
            if(res>INT_MAX/10 || (res==INT_MAX/10 && digit>7))
                if(semn==1)
                    return INT_MAX;
                else
                    return INT_MIN;
            res = res * 10 + digit;
            i++;
        }
        return res * semn;
    }
};