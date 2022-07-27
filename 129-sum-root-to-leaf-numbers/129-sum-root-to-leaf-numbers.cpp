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
    void solve(TreeNode* root, string str){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL){
            str+= (root->val)+'0';
            int temp= stoi(str);
            v.push_back(temp);
            return;
        }
        str+= (root->val)+'0';
        solve(root->left,str);
        solve(root->right,str);
    }
    int sumNumbers(TreeNode* root) {
        int sum=0;
        if(root==NULL) return 0;
        solve(root,"");
        for(auto &x:v) sum+=x;
        return sum;
    }
};