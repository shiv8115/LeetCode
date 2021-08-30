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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    ListNode* get_middle(ListNode* head, ListNode* tail){
        if(head==tail) return NULL;
        ListNode* slow=head, *fast=head;
        while(fast!=tail && fast->next!=tail){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
    TreeNode* BuildBST(ListNode* start, ListNode* end){
        if(start==end) return NULL;
        ListNode* mid= get_middle(start,end);
        TreeNode* root= new TreeNode(mid->val,NULL,NULL);
        root->left= BuildBST(start,mid);
        root->right= BuildBST(mid->next,end);
        return root;
        
    }
    
    TreeNode* sortedListToBST(ListNode* head) {
        return BuildBST(head,NULL);
        
    }
};