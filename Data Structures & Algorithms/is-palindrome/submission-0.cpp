class Solution {
public:
    bool isPalindrome(string s) {
    
        for (int j = 0; j < s.size(); ) {
            if (!isalnum(s[j])) {   
                s.erase(j, 1);      
                } else {
                j++;                
            }
        }
        string rev = s;
        reverse(rev.begin(), rev.end());
        int len = s.size();
        for (int i = 0; i < len; i++){
            if (toupper(s[i]) != toupper(rev[i])) {
                return false;
            }
        }
        return true;
    }
};
