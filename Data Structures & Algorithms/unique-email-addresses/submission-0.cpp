class Solution {
   public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> seen;

        for (const string& email : emails) {
            string local = "";
            size_t i = 0;

            while (email[i] != '@') {
                if (email[i] == '+') {
                    while (email[i] != '@') i++;
                    break;
                }
                if (email[i] != '.') {
                    local += email[i];
                }
                i++;
            }

            string domain = email.substr(email.find('@'));
            seen.insert(local + domain);
        }

        return seen.size();
    }
};
