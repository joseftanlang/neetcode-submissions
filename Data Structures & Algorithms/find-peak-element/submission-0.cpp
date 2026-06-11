class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int peak = 0;
        int c = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (c < nums[i]) {
                c = nums[i];
                peak = i;
            }
        }
        return peak;
    }
};