class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> myList;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    myList.push_back(i);
                    myList.push_back(j);
                    return myList;
                }
            }
        }
        return myList;
    }
};
