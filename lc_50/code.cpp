class Solution {
public:
    double myPow(double x, int n)
    {
        if (n == 0)
            return 1;
        if(x==1)
            return 1;
        if(x==-1)
            if(n%2==0)
                return 1;
            else
                return -1;
        if (n == INT_MIN)
            return 0;
        if (n < 0)
            return 1 / myPow(x, -n);
        double y = myPow(x, n / 2);
        if (n % 2 == 0)
            return y * y;
        else
            return y * y * x;
    }
};