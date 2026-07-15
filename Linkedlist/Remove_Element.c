/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode *dummy =(struct ListNode*)malloc(sizeof(struct ListNode));

    dummy->next = head;

    struct ListNode *current  = dummy;

    while(current !=NULL){
        while(current -> next != NULL && current->next->val == val){
            struct ListNode* temp = current->next;
            current->next = current->next->next;
            free(temp);
        }

        current  = current->next;
    }
    struct ListNode *newhead = dummy->next;
    free(dummy);

    return newhead;

}
