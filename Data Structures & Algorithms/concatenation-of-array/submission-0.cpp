class Solution {
   public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> arr;
        // int j = 0;
        int c = 0;
        int i = 0;
        while (c < 2) {
            for (i = 0; i < nums.size(); i++) {
                arr.push_back(nums[i]);
                // j++;
            }
            i = 0;
            c++;
        }
        return arr;
    }
};