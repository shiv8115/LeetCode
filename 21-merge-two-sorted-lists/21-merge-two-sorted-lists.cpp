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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL || list2==NULL){
            return (list1==NULL)?list2:list1;
        }
        ListNode* New_head= new ListNode(-1);
        ListNode* it= New_head;
        while(list1 && list2){
            if(list1->val< list2->val){
               // list1= list1->next;
                New_head->next= list1;
                list1= list1->next;
                
            }else{
               // list2=list2->next;
                New_head->next= list2;
                list2=list2->next;
            }
            New_head= New_head->next;
        }
        if(list1!=NULL) New_head->next= list1;
        else New_head->next= list2;
        
        return it->next;
        
    }
};