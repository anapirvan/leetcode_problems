class Solution {
public:
    bool canJump(vector<int>& nums)
    {
        int y = nums.size() - 1, x = y - 1;
        while (x >= 0)
        {
            if (x + nums[x] >= y)
                y=x;
            x--; 
        }
        return y==0;
    }
    
};