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
    void reorderList(ListNode* head) {
         if(head->next==NULL)return ;
        ListNode* temp=head;
        vector<int> vec;
        while(temp!=NULL){
            vec.push_back(temp->val);
            temp=temp->next;
        }
        int si=0;
        int ei=vec.size()-1;
       
        vector<int> myvec;
        while(si<ei){
            myvec.push_back(vec[si]);
            myvec.push_back(vec[ei]);
            si++;
            ei--;
            if(si==ei)myvec.push_back(vec[si]);
        }
        int i=0;
        ListNode* temp1=head;
        while(temp1!=NULL){
            temp1->val=myvec[i];
            i++;
            temp1=temp1->next;
        }
    }
};