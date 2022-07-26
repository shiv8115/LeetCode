/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
          int n1=p->val,n2=q->val;
        if(root==NULL) return NULL;
        if(root->val==n1 || root->val==n2) return root;
        TreeNode* left_lca=lowestCommonAncestor(root->left,p,q);
        TreeNode* right_lca=lowestCommonAncestor(root->right,p,q);
        if(left_lca && right_lca) return root;
        return (left_lca!=NULL)?left_lca:right_lca;
        
    }
};