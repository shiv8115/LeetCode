// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	struct treeNode{
	        int val;
	        char symbol;
	        treeNode* left;
	        treeNode* right;
	        treeNode(int v, char c, treeNode* l = NULL, treeNode *r = NULL){
	            val = v;
	            symbol = c;
	            left = l;
	            right = r;
	        }
	    };
	
	
	    struct comp{
	        bool operator()(treeNode * node1 , treeNode* node2){
	            return node1->val > node2->val;
	        }
	    };
	    
	    void preOrderTransversal(treeNode* root, vector<string> &ans, string curr = ""){
	        if(root == NULL){
	            return;
	        }
	        if(root->symbol != '$' && root->left == NULL && root->right == NULL){
	            ans.push_back(curr);
	            return;
	        }
	        preOrderTransversal(root->left, ans, curr + '0');
	        preOrderTransversal(root->right, ans, curr + '1');
	        return;
	    }
	    
	
		vector<string> huffmanCodes(string s,vector<int> f,int N)
		{
		    priority_queue<treeNode*, vector<treeNode*>, comp> pq;
		    for(int i = 0; i < N; i++){
		        pq.push(new treeNode(f[i], s[i]));
		    }
		    while(pq.size() > 1){
		        treeNode *l = pq.top();
		        pq.pop();
		        treeNode *r = pq.top();
		        pq.pop();
		        treeNode* node = new treeNode(l->val + r->val, '$', l, r);
		        pq.push(node);
		    }
		    vector<string> ans;
		    preOrderTransversal(pq.top(), ans, "");
		    return ans;
		}
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
	    string S;
	    cin >> S;
	    int N = S.length();
	    vector<int> f(N);
	    for(int i=0;i<N;i++){
	        cin>>f[i];
	    }
	    Solution ob;
	    vector<string> ans = ob.huffmanCodes(S,f,N);
	    for(auto i: ans)
	    	cout << i << " ";
	    cout << "\n";
    }
	return 0;
}  // } Driver Code Ends