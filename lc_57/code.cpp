class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval)
    {
        int i = 0;
        while (i<intervals.size() && newInterval[0] > intervals[i][0])
            i++;
        //vector<vector<int>> new_intervals;
        intervals.insert(intervals.begin() + i, newInterval);
        intervals = merge(intervals);
        return intervals;
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals)
    {
        for (int i = 0;i < intervals.size() - 1;i++)
            if (intervals[i][1] >= intervals[i + 1][0])
            {
                intervals[i + 1][0] = intervals[i][0];
                intervals[i + 1][1] = max(intervals[i + 1][1], intervals[i][1]);
                intervals.erase(intervals.begin() + i);
                i--;
            }
        return intervals;
    }
};