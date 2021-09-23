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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL || l2==NULL){
            return (l1==NULL)?l2:l1;// if one of the list have NULL then return other list
        }
        ListNode *p1=l1, *p2=l2;
        ListNode *new_head= new ListNode(-1);// avoid null pointer exception
        ListNode *it= new_head;
        
        while(p1 && p2){
            if(p1->val < p2->val){
                it->next=p1;
                p1=p1->next;
            }else{
                it->next=p2;
                p2=p2->next;
            }
            it=it->next;
        }
        if(p1!=NULL){// if one of the smaller size list exhaust then append greater size list in iterator
            it->next=p1;
        }else{
            it->next=p2;
        }
        return new_head->next;// avoid -1
        
        
    }
};