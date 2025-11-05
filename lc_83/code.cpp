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
    ListNode* deleteDuplicates(ListNode* head) {

        ListNode* dummy = new ListNode();
        dummy->next = head;
        ListNode* curr = head, * prev = head;;

        while (curr != nullptr)
        {
            if (curr->val == prev->val)
            {
                while (curr!=nullptr && curr->val == prev->val)
                    curr = curr->next;
                prev->next = curr;
            }
            prev = curr;
            if(curr!=nullptr)
                curr = curr->next;

        }
        return dummy->next;
    }
};