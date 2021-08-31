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
    ListNode* reverse1(ListNode* head){
        ListNode *curr=head,*next=NULL, *prev=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    vector<int> nextLargerNodes(ListNode* head1) {
        vector<int>v;
        ListNode* head= reverse1(head1);
        v.push_back(0);
        stack<int>st;
        st.push(head->val);
        head=head->next; 
        while(head!=NULL){
           while(!st.empty() && head->val >= st.top())
               st.pop();
            if(st.size()==0) v.push_back(0);
            else v.push_back(st.top());
            
            st.push(head->val);
            head=head->next;
            
        }
        reverse(v.begin(),v.end());
        return v;
        
        
    }
};