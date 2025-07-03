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
    //aa
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *q= new ListNode(0);
        ListNode *curr = q;
        int carry =0;

        while(l1!=NULL || l2!=NULL || carry !=0){
            int val1 = (l1 != NULL) ? l1->val : 0;
            int val2 = (l2 != NULL) ? l2->val : 0;

            int s = val1 + val2 + carry;
            carry = s/10;

            curr->next = new ListNode(s%10);
            curr = curr -> next;

            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }
         return q->next;
    }
};