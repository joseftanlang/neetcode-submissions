class Solution {
   public:
    int longestConsecutive(std::vector<int>& nums) {
        if (nums.empty()) return 0;

        std::sort(nums.begin(), nums.end());

        int longest = 1;
        int current = 1;

        for (size_t i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                continue;  // skip duplicates
            } else if (nums[i] == nums[i - 1] + 1) {
                current++;
                longest = std::max(longest, current);
            } else {
                current = 1;  // reset count
            }
        }
        return longest;
    }
};
