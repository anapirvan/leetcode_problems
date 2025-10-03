

 class Solution {
 public:
     int divide(int dividend, int divisor)
     {
         if (dividend == divisor)
             return 1;
         bool isPos = (dividend < 0 == divisor < 0);
         unsigned int a = labs(dividend), b = labs(divisor);
         unsigned int res = 0;
         while (a >= b)
         {
             int q = 0;
             while (a > (b << (q + 1)))
                 q++;
             res += (1 << q);
             a -= (b << q);
         }
         if (res == (1 << 31) && isPos)
             return INT_MAX;
         if (res > (1 << 31) && !isPos)
             return INT_MIN;
         if (!isPos)
             res = -res;
         return res;
     }
 };
 
 
