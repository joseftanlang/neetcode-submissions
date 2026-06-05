class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int col = matrix[0].size();

        int right = 0;
        int last_cols = col - 1;

        while (right < rows && last_cols >= 0) {
            if (matrix[right][last_cols] == target) {
                return true;
            } else if (matrix[right][last_cols] > target) {
                last_cols--;
            } else {
                right++;
            }
        }
        return false;
    }
};