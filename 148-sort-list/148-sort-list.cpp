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
    ListNode* sortList(ListNode* head) {
        if(head==NULL) return NULL;
        vector<int>v;
        ListNode* curr= head;
        while(curr!=NULL){
            v.push_back(curr->val);
            curr=curr->next;
        }
        sort(begin(v), end(v));
        curr= new ListNode(-1);
        curr=head;
        ListNode* h= curr;
        for(int i=0;i<v.size();i++){
            curr->next= new ListNode(v[i]);
            curr=curr->next;
        }
        return h->next;
    }
};