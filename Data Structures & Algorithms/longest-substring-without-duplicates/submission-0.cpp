class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> cnt;  
        int left = 0, total = 0;

        for (int right = 0; right < (int)s.size(); right++) {
            cnt[s[right]]++;

            while (cnt[s[right]] > 1) {
                cnt[s[left]]--;
                left++;
            }

            total = max(total, right - left + 1);
        }

        return total;
    }
};
