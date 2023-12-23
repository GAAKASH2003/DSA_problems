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
    int getDecimalValue(ListNode* head) {
        int count=0;
        ListNode*curr=head;
        while(curr!=NULL){
            count++;
            curr=curr->next;
        }
        int sum=0;
        count--;
        curr=head;
        while(curr!=NULL){
            if(curr->next==NULL){
              sum+=curr->val;
                break;
            } 
            sum+=pow(2,count)*curr->val;
            curr=curr->next;
            count--;
        }
        return sum;
    }
};