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
         if(head==NULL) return head;
        while(head->val==val){
            if(head->next==NULL)
                return NULL;
            head=head->next;
        }
        ListNode* p=head;
        ListNode* q=head->next;
        while(q){
            if(q->val!=val){
                q=q->next;
                p=p->next;
            }
            else{
                q=q->next;
                p->next=q;
            }
        }
        return head;
        
    }
};