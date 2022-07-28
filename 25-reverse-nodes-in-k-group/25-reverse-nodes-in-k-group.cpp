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
    int getsize(ListNode* head){
        int cnt=0;
        while(head!=NULL){
            cnt++;
            head=head->next;
        }
        return cnt;
    }
    ListNode* solve(ListNode* head, int k, int n){
        if(head==NULL) return NULL;
        if(n<k) return head;
        ListNode* curr= head, *next=head, *prev=NULL;
        int cnt=0;
        while(curr!=NULL && cnt<k){
            next= curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            cnt++;
        }
        head->next= solve(next,k,n-k);
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int a= getsize(head);
        ListNode* res= solve(head,k,a);
        return res;
    }
};