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
    ListNode* reverse(ListNode* head, int k){
        ListNode* curr=head, *next=NULL, *prev=NULL;
        while(curr && k){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            k--;
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int count=0;
        if(k==1) return head;
        ListNode* curr=head, *next_head=NULL;
        while(curr && count<k){
            curr=curr->next;
            count++;
        }
        if(count<k) return head;
        next_head=curr;
        ListNode* new_head= reverse(head,k);
        head->next= reverseKGroup(next_head,k);
        return new_head;
        
    }
};