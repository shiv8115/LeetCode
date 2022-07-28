class Solution {
public:
    int size(ListNode* head){
        if(head == NULL){
            return 0;
        }
        
        return 1 + size(head->next);
    }
    ListNode* reverse(ListNode* head , int k , int size){
        
        if(head == NULL){
           return head;
        }
        if(size < k){
            return head;
        }
        
        int n = 0;
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = head;
        
        while(next != NULL && n < k){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            n++;
        }
        
        head->next = reverse(next , k , size - k);
        
        return prev; 
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int a = size(head);
        ListNode* ans = reverse(head , k , a);
        return ans;
    }
};