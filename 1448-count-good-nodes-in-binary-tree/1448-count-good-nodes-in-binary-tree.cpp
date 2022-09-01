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
    int count=0;
    int count_nodes(TreeNode* root,int maxValue){
        if(root==NULL) return 0;
        if(root->val>=maxValue) count++;
        maxValue=max(maxValue,root->val);
        count_nodes(root->left,maxValue);
        count_nodes(root->right,maxValue);
        return count;
    }
    int goodNodes(TreeNode* root) {
        if(root==NULL) return 0;
        if(root->left==NULL && root->right==NULL) return 1;
        count_nodes(root,root->val);
        return count;
        
    }
};