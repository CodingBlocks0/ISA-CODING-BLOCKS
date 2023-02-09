class Solution {
public:
    ListNode *removeElements(ListNode *head, int value) {

        ListNode *D = new ListNode(-1);
        ListNode *Dptr = D;

        ListNode *temp = head;

        while (temp != NULL) {
            if (temp->val == value) {
                temp = temp->next;
            } else {
                Dptr->next = temp;
                Dptr = temp;
                temp = temp->next;
            }
        }

        Dptr->next = NULL;
        return D->next;

    }
};
