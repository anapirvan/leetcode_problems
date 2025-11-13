class Solution {
public:
    vector<int> grayCode(int n)
{
    int total = (1 << n);
    vector<int>sol;
    for (int i = 0;i < total;i++)
        sol.push_back(i ^ (i >> 1));
    return sol;
}
};