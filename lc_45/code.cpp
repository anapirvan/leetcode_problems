class Solution {
public:
    int jump(vector<int>& nums)
    {
        if (nums.size() == 1)
            return 0;
        int jumps = 0,b=0,furthest=0 ;
        for (int a = 0;a < nums.size() - 1;a++)
        {
            furthest = max(furthest, nums[a] + a);

            if (a == b)
            {
                jumps++;
                b = furthest;
            }
        }
        return jumps;
    }
    
};