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
    ListNode* rev(ListNode* head) {
            ListNode*curr=head;
            ListNode*prev=NULL;
            ListNode*next=NULL;
            int count=0;
            while(curr!=NULL){
                next=curr->next;
                curr->next=prev;
                prev=curr;
                curr=next;
                count++;}
        return prev;
    
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
            ListNode*curr=head;
            ListNode*prev=NULL;
            ListNode*next=NULL;
            int count=0;
            while(curr!=NULL and count<k){
                next=curr->next;
                curr->next=prev;
                prev=curr;
                curr=next;
                count++;
            }
            if(count!=k){
                prev=rev(prev);
            }
            
            if(next!=NULL){
                ListNode*rest=reverseKGroup(next,k);
                head->next=rest;
            }
        return prev;
    }
};