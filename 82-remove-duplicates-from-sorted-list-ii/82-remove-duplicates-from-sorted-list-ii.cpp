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
        if(head==NULL || head->next == NULL) return head;
        ListNode* prev= NULL, * new_head= NULL, *curr=head;
        while(curr!=NULL){
            if(curr->next && curr->val == curr->next->val){
                while(curr->next && curr->val == curr->next->val) curr= curr->next;// skiping duplicate elements
               
            }
            else{
                if(new_head==NULL) {
                    new_head=curr;
                   
                }
                else  
                    prev->next=curr;
                
                prev= curr;
            }
            curr=curr->next;
        }
        if(prev) prev->next=NULL;
        return new_head;
    }
};