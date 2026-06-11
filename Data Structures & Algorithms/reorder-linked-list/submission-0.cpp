/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
   public:
    void reorderList(ListNode* head) {
        vector<int> arr;
        vector<int> fin;
        // put the linkedlist into vector array
        ListNode* curr = head;
        while (curr != nullptr) {
            arr.push_back(curr->val);
            curr = curr->next;
        }

        // sorting the left n right
        int left = 0, right = arr.size() - 1;
        while (left <= right) {
            fin.push_back(arr[left++]);
            if (left <= right) {
                fin.push_back(arr[right--]);
            }
        }

        // iterate back from final vector to linkedlist
        int j = 0;
        curr = head;
        while (curr != nullptr && j < fin.size()) {
            curr->val = fin[j];
            curr = curr->next;
            j++;
        }
    }
};
