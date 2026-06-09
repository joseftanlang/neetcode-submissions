class Solution {
   public:
    int lengthOfLastWord(string str) {
        stringstream ss(str);
        string word;
        string lastWord;

        while (ss >> word) {
            lastWord = word;
        }
        return lastWord.size();
    }
};