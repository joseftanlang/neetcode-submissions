class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> result;
      
        int wordCount = words.size();
        for (int i = 0; i < wordCount; ++i) {
            for (int j = 0; j < wordCount; ++j) {
                if (i != j && words[j].find(words[i]) != string::npos) {
                    result.push_back(words[i]);
                    break;
                }
            }
        }
      
        return result;
    }
};