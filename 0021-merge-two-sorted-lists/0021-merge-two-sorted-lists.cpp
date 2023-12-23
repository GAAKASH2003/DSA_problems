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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==   NULL){
            return list2;
        }
        if(list2==   NULL){
            return list1;
        }
        ListNode*head1=list1;
       ListNode*temp1=list1;
        ListNode*head2=list2;
        ListNode*temp2=list2;
        ListNode*head3=NULL;
        ListNode*temp3=NULL;
        while(temp1!=NULL and temp2!=NULL){
            if(temp1->val>temp2->val){
                if(head3==NULL){
                    head3=new ListNode(temp2->val);
                    temp3=head3;
                     temp2=temp2->next;
                }
                else{
                    temp3->next=new ListNode(temp2->val);
                    temp3=temp3->next;
                    temp2=temp2->next;
                }
            }
            else{
                if(head3==NULL){
                    head3=new ListNode(temp1->val);
                    temp3=head3;
                    temp1=temp1->next;
                }
                else{
                    temp3->next=new ListNode(temp1->val);
                    temp3=temp3->next;
                    temp1=temp1->next;
                }
            }
        }
        while(temp1!=NULL){
             temp3->next=new ListNode(temp1->val);
                    temp3=temp3->next;
                    temp1=temp1->next;
        }
         while(temp2!=NULL){
             temp3->next=new ListNode(temp2->val);
                    temp3=temp3->next;
                    temp2=temp2->next;
        }
        return head3;
    }
};