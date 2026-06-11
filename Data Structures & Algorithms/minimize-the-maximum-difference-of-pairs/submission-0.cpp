class Solution {
public:
    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int left = 0;
        int right = nums[n - 1] - nums[0];
        int firstTrueIndex = -1;

        auto feasible = [&](int maxDiff) -> bool {
            int pairCount = 0;
            for (int i = 0; i < n - 1; ++i) {
                if (nums[i + 1] - nums[i] <= maxDiff) {
                    ++pairCount;
                    ++i;
                }
            }
            return pairCount >= p;
        };

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (feasible(mid)) {
                firstTrueIndex = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return firstTrueIndex != -1 ? firstTrueIndex : 0;
    }
};