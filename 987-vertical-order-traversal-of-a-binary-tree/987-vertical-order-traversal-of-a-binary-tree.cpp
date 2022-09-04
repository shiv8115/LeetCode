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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
    vector<vector<int>> ans;
    //for collecting all values at a given r and c
    //key is c to maintain order from left to right
    
    //int second map r is key 
    //its matrix of vectors 
    map<int, map<int, vector<int>>> mp;
    //node and its position
    queue<pair<TreeNode*, pair<int,int>>> q;
    q.push({root,{0,0}});
    
    //normal level order traversal
    while(!q.empty()){
        auto p = q.front(); q.pop();
        TreeNode* curr = p.first;
        int r = p.second.first;
        int c = p.second.second;
        //note in map first is c then r in queue first is r then c
        //in map first c is taken to maintain order as per c ie horizontal distance from root node
        //left is -1 each step and right side +1 each step
        mp[c][r].push_back(curr->val);
        
        if(curr->left) { q.push({curr->left, {r+1,c-1}}); }
        if(curr->right) { q.push({curr->right, {r+1,c+1}}); }
    }
    
    //now mp has matrix of vectors where each vector has all values at a certain r and c
    //mp[2][0] has {6,5} which needs to be sorted while pushing into answer
    
    //for a certian c in map we have a another map with keys as r and values as vectors
    for (auto c : mp) {
        vector<int> col;
        for(auto r : c.second){
            //sort before filling
            sort(r.second.begin(), r.second.end());
            //this line simply takes data from the given vector and adds it
            //to col vector ie data of all vectors(each in each row) in a given column
            //are appended into single vector col
            col.insert(col.end(), r.second.begin(), r.second.end());
        }
        //push current column
        ans.push_back(col);
    }
    return ans;

    }
};