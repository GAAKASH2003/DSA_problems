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
    ListNode *getIntersectionNode(ListNode *ha, ListNode *hb) {
        // ListNode*temp=headA;
     ListNode*temp=ha;
        int c1=0;
        int c2=0;
        set<ListNode*>s;
        while(temp!=NULL){
        s.insert(temp);
        temp=temp->next;
        }
        temp=hb;
        while(temp!=NULL){
            if(s.find(temp)!=s.end()){
                return temp;
            }
            temp=temp->next;
        }
        
      
    return NULL;
    }
};