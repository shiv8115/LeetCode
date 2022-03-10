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
    TreeNode* make_bst(vector<int>&arr,int low,int high){
        if(low>high) return NULL;
        int mid= low+(high-low)/2;
        TreeNode *root= new TreeNode(arr[mid]);
        root->left= make_bst(arr,low,mid-1);
        root->right= make_bst(arr,mid+1,high);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n= nums.size();
        TreeNode* ans= make_bst(nums,0,n-1);
        return ans;
        
    }
};