class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int total = n1 + n2;

        // Merged array
        std::vector<int> merged;
        merged.reserve(total);

        // Two-pointer merge
        int i = 0, j = 0;
        while (i < n1 && j < n2) {
            if (nums1[i] < nums2[j]) {
                merged.push_back(nums1[i++]);
            } else {
                merged.push_back(nums2[j++]);
            }
        }

        while (i < n1) merged.push_back(nums1[i++]);
        while (j < n2) merged.push_back(nums2[j++]);

        if (total == 0) return 0.0; // handle empty input
        if (total % 2 == 1) {
            return merged[total / 2];
        } else {
            return (merged[total / 2 - 1] + merged[total / 2]) / 2.0;
        }
    }
};