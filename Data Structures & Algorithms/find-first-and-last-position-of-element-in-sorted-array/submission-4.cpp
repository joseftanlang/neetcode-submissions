class Solution {
   public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> arr;
        if (nums.empty()){
            arr.push_back(-1);
            arr.push_back(-1);
            return arr;
        };
        int idx = 0;
        while (idx <= 2) {
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == target) {
                    arr.push_back(i);
                    idx++;
                }
            }
            break;
        }
        if (idx == 1) {
            int temp = arr[0];
            arr.push_back(temp);
            return arr;
        }
        if (arr.empty()){
            arr.push_back(-1);
            arr.push_back(-1);
        };
        return {arr.front(), arr.back()};
    }
};