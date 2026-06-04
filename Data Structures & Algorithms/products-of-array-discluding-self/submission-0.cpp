
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        vector<int> prefix(len, 1);
        vector<int> suffix(len, 1);
        vector<int> newNums(len, 1);

        for (int p = 1; p < len; p++) {
            prefix[p] = prefix[p - 1] * nums[p - 1];
        }
        for (int s = len - 2; s >= 0; s--) {
            suffix[s] = suffix[s + 1] * nums[s + 1];
        }

        for (int i = 0; i < len; i++) {
            newNums[i] = prefix[i] * suffix[i];
        }

        return newNums;
    }
};