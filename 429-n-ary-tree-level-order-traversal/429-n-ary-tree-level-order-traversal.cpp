/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
   vector<vector<int>> levelOrder(Node* root) {
    vector<vector<int>> res;
    //if root is null return res
    if(!root) { return res; }
    //initialise q and push root into it
    queue<Node*> q;
    q.push(root);
    
    //iterate til q becomes empty
    while(!q.empty()){
        //get num on nodes in current level
        //note in each iteration q contains all nodes in a certain level
        int size = q.size();
        //to store values of current level
        vector<int> level;
        
        //iterate over nodes of a current level
        for(int i=0; i<size; i++){
            //get data of node and push back into level
            Node* curr = q.front(); q.pop();
            level.push_back(curr->val);
            //add children of curr node if any
            for(auto x : curr->children) { q.push(x); } 
        }
        //push level into ans
        res.push_back(level);
    }
    return res;
   }
};