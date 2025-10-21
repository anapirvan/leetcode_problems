class Solution {
public:
    int mySqrt(int x)
    {
        if (x == 0 || x == 1)
            return x;
        int l = 1, r = x/2,m;
        while (l <= r)
        {
            m = (l + r) / 2;
            long long p =(long long) m * m;
            if (p == x)
                return m;
            else
                if (x < p)
                    r = m - 1;
                else
                    l = m + 1;
        }
        return r;
    }
};