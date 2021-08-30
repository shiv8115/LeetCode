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
    int length(ListNode* head){
        int count=0;
        while(head!=NULL){
            head=head->next;
            count++;
        }
        return count;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int diff;
        ListNode* p1=NULL,*p2=NULL;
        int l1= length(headA);
        int l2= length(headB);
        if(l1>l2){
             diff=l1-l2;
             p1=headA;
             p2=headB;
             
        }else{
            diff=l2-l1;
            p1=headB;
            p2=headA;
        }
        while(diff>0){
            p1=p1->next;
            diff--;
        }
        while(p1!=NULL || p2!=NULL){
            if(p1==p2) return p1;
            p1=p1->next;
            p2=p2->next;
        }
        return NULL;
        
    }
};