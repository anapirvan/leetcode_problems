class Solution {
public:
    int reverse(int x) {
        int r = 0, u;
        while (x)
        {
            u = x % 10;
            x /= 10;
            if (r > INT_MAX / 10 || (r == INT_MAX / 10 && u > 7))
                return 0;
            if (r < INT_MIN / 10 || (r == INT_MIN / 10 && u < -8))
                return 0;
            r = r * 10 + u;
        }
        return r;
    }
};