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
    ListNode* rotateRight(ListNode* head, int k)
    {
        if (head == nullptr)
            return head;
        if (head->next == nullptr)
            return head;

        ListNode* prim = head;
        int nr=0;
        while (prim != nullptr)
        {
            nr++;
            prim = prim->next;
        }
        if (k == nr)
            return head;
        else
            if (k > nr)
                k = k % nr;

        ListNode* ultim = new ListNode(), * prev = new ListNode();
        while (k > 0)
        {
            ultim = head;
            while (ultim->next != nullptr)
            {
                prev = ultim;
                ultim = ultim->next;
            }
            prev->next = nullptr;
            ultim->next = head;
            head = ultim;
            k--;
        }
        return head;
    }
};