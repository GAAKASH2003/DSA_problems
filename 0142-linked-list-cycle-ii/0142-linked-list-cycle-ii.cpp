/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode*slow=head;
        ListNode*fast=head;
        ListNode*no=new ListNode(-1);
        // if(head==NULL){
        //      return new ListNode(-1);
        // }
        //  if(head->next==NULL){
        //      return NULL;
        // }
        do{
            if(fast!=NULL and fast->next!=NULL){
                fast=fast->next->next;
            }
            else{
                return NULL;
            }
            slow=slow->next;
        }
        while(slow!=fast);

        slow=head;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
    }
};