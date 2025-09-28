class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        int nr = 0, copy = x;
        while (copy)
        {
            int digit = copy % 10;
            if(nr>=INT_MAX/10)
                return false;
            nr = nr * 10 + digit;
            copy /= 10;
        }
        if (x == nr)
            return true;
        return false;
    }
};