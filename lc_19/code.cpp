class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* t = head;
    int nr = 0;
    while (t != nullptr)
    {
        nr++;
        t = t->next;
    }
    if (nr == 1)
        return nullptr;
    if (nr == n)
    {
        ListNode* aux = head;
        head = head->next;
        delete aux;
        return head;
    }
    if (nr == n - 1)
    {
        ListNode* aux = head->next;
        head->next = head->next->next;
        delete aux;
        return head;
    }
    t = head;
    for (int i = 0;i < nr - n - 1;i++)
        t = t->next;
    ListNode* aux = t->next;
    t->next = t->next->next;
    delete aux;
    return head;
}
};