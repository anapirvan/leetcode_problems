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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
    {
        ListNode* prim = new ListNode();
        ListNode* ultim = prim;
        // ListNode* t = list1; ListNode* q = list2;
        while (list1 != nullptr && list2 != nullptr)
        {
            if (list1->val < list2->val)
            {
                ultim->next = list1;
                list1 = list1->next;
            }
            else
            {
                ultim->next = list2;
                list2 = list2->next;
            }
            ultim = ultim->next;
        }

        if (list1 != nullptr)
            ultim->next = list1;

        if (list2 != nullptr)
            ultim->next = list2;

        return prim->next;
    }
    
};