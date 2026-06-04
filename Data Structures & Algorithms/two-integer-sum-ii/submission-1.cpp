class Solution {
   public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> sum = {0,0};
        for (int i = 0; i < numbers.size(); i++) {
            for (int j = 0; j < numbers.size(); j++) {
                if ((numbers[i] + numbers[j]) == target) {
                    sum[1] = i + 1;
                    sum[0] = j + 1;
                }
            }
        }
        return sum;
    }
};
