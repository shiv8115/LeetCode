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
    vector<int>v;
    void path_sum(TreeNode* root,int sum){
        //static int sum=0;
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL){
            sum+=root->val;
            v.push_back(sum);
            sum=0;
            return;
        }
        sum+=root->val;
        path_sum(root->left,sum);
        path_sum(root->right,sum);

        
    }
        
    bool hasPathSum(TreeNode* root, int targetSum) {
        path_sum(root,0);
        for(int i=0;i<v.size();i++){
            if(v[i]==targetSum) return true;
        }
        return false;    
    }
};