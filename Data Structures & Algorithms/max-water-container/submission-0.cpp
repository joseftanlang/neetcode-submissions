class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;
        int max_area = 0;
        
        while (left < right) {
            int height = min(heights[left], heights[right]);
            int width = right - left;
            int current_area = height * width;
            max_area = max(max_area, current_area);
            
            if (heights[left] < heights[right]) {
                left++;
            } else {
                right--;
            }
        }
        return max_area;
    }
};