class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0, left = 0, right = height.size() - 1;
        while (left < right)
        {
            int area = (right - left) * min(height[left], height[right]);
            maxArea = max(area, maxArea);
            if (height[left] > height[right])
                right--;
            else
                left++;
        }
        return maxArea;
    }
};