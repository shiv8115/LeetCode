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
    int getDecimalValue(ListNode* head) {
         vector<int> memoryVect;
        ListNode* curr = nullptr;
        int binaryAdd = 0;
        curr = head;
        
        while(curr != nullptr) {
            memoryVect.push_back(curr->val);
            curr = curr->next;
        }
        int x = 0;
        // convert to binary
        // ex: 1011
        // (1 * 2^3) + (0 * 2^2) + (1 * 2^1) + (1 * 2^0)
        for(int i = memoryVect.size()-1; i >= 0; i--) {
            binaryAdd += (memoryVect[i] * pow(2,x));
            x++;
        }
        return binaryAdd;
         
        
    }
};