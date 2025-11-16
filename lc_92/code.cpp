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
    ListNode* reverseBetween(ListNode* head, int left, int right)
{
    
    ListNode* dummy = new ListNode();
    dummy->next = head;
    ListNode* prev = dummy;
    int i = 1;
    while (i < left)
    {
        prev = prev->next;
        i++;
    }

    ListNode* curr = prev->next;
    ListNode* temp = new ListNode();

    for (i = 0;i < right - left;i++)
    {
        temp = curr->next;
        curr->next = temp->next;
        temp->next = prev->next;
        prev->next = temp;
    }
    return dummy->next;
}
};