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
    ListNode* partition(ListNode* head, int x)
    {
        ListNode* dummy1 = new ListNode();
        ListNode* dummy2 = new ListNode();

        ListNode* small = dummy1;
        ListNode* big = dummy2;

        while (head != nullptr)
        {
            if (head->val < x)
            {
                small->next = head;
                small = small->next;
            }
            else
            {
                big->next = head;
                big = big->next;
            }
            head = head->next;
        }

        small->next = dummy2->next;
        big->next = nullptr;
        return dummy1->next;
    }
};