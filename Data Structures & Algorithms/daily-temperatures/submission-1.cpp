class Solution {
   public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> stk;
        vector<int> arr(temperatures.size(), 0);

        for (int i = 0; i < temperatures.size(); i++) {
            while (!stk.empty() && temperatures[i] > temperatures[stk.top()]) {
                int old = stk.top();
                stk.pop();

                arr[old] = i - old;
            }

            stk.push(i);
        }
        return arr;
    }
};
