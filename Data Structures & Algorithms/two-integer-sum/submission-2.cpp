class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> arr;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (i != j && ((nums[i] + nums[j]) == target)) {
                    arr.push_back(i);
                    arr.push_back(j);
                }
            }
        }
        vector <int>fin(2);
        fin[0] = arr[0];
        fin[1] = arr[1];
        return fin;
    }
};
