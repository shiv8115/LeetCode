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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast=head, *slow=head;
        for(int i=0;i<n-1;i++) fast=fast->next;
        if(fast->next==NULL){
            return slow->next;
        }
        while(fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        ListNode *temp= slow->next;
        slow->next= slow->next->next;
        delete(temp);
        return head;
    }
};