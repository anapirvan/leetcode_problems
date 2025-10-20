class Solution {
public:
    string addBinary(string a, string b)
    {
        int carry = 0, na = a.length() - 1, nb = b.length() - 1;
        string s;
        while (na >= 0 && nb >= 0)
        {
            int sum = a[na]-'0' + b[nb]-'0'+carry;
            if (sum >= 2)
            {
                sum -= 2;
                s.insert(s.begin(), sum+'0');
                carry = 1;
            }
            else
            {
                s.insert(s.begin(), sum + '0');
                carry = 0;
            }
            na--; nb--;
        }

        while (na >= 0)
        {
            int sum = a[na] - '0' + carry;
            if (sum >= 2)
            {
                sum -= 2;
                s.insert(s.begin(), sum+'0');
                carry = 1;
            }
            else
            {
                s.insert(s.begin(), sum + '0');
                carry = 0;
            }
            na--;
        }

        while (nb >= 0)
        {
            int sum = b[nb] - '0' + carry;
            if (sum >= 2)
            {
                sum -= 2;
                s.insert(s.begin(), sum+'0');
                carry = 1;
            }
            else
            {
                s.insert(s.begin(), sum + '0');
                carry = 0;
            }
            nb--;
        }

        if (carry==1)
            s.insert(s.begin(), '1');

        return s;
    }
};