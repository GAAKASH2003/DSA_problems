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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode*temp=head;
        if(head!=NULL and head->val==val){
            while(temp!=NULL and temp->val==val){
                temp=temp->next;
            }
             head=temp;
        }
        
        if(temp==NULL) return NULL;
        while(temp!=NULL){
            if(temp->next!=NULL and temp->next->val==val){
                ListNode*r=temp->next;;
                while(r!=NULL and r->val==val){
                    r=r->next;
                }
                
                temp->next=r;
               
            }
                temp=temp->next;
            }

        return head;
    }
};