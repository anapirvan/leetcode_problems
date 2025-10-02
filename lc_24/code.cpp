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
    ListNode* swapPairs(ListNode* head)
    {
    if (head == nullptr || head->next == nullptr)
        return head;
    ListNode* prim = head, * prev = head, *n1=head, *n2=head;
    while (prim->next != nullptr)
    {
        if (prim == head)
        {
            n1 = prim->next;
            n2 = n1->next;
            n1->next = prim; prim->next = n2;
            head = n1;
        }
        else
        {
            n1 = prim->next; n2 = n1->next;
            prev->next = n1; n1->next = prim;
            prim->next = n2;
        }
        prev = prim;
        if (prim->next != nullptr)
            prim = prim->next;
    }
    return head;
    }
};