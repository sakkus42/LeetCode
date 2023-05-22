/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode l_res, *l_iter;
    l_res.val = 0;
    l_res.next = NULL;
    int sum = 0, remainder = 0;
    l_iter = &l_res;
    while (l1 || l2 || remainder != 0){
        sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + remainder;
        remainder = sum / 10;
        sum %= 10;
        l_iter->next = malloc(sizeof(struct ListNode));
        l_iter->next->val = sum;
        l_iter->next->next = NULL;
        l_iter = l_iter->next;
        l1 = l1 ? l1->next : 0;
        l2 = l2 ? l2->next : 0;
    }
    return (l_res.next);
}