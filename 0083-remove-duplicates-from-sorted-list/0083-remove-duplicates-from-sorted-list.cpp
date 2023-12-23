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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode*temp=head;
        if(head==NULL) return head;
        ListNode*head1=new ListNode(head->val);
        ListNode*temp1=head1;
        int prev=temp->val;
        while(temp!=NULL){
            if(prev!=temp->val){
                temp1->next=new ListNode(temp->val);
                temp1=temp1->next;
                prev=temp->val;
            }
            temp=temp->next;
        }
        return head1;
    }
};