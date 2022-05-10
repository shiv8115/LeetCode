class Solution {
public:
   void helper(int k,int n,vector<vector<int>>& ans,vector<int>& t,int start){
        if(n==0 && t.size()==k){ans.push_back(t);return;}
        if(n<=0 || t.size()>=k){return;}
        for(int i=start;i<=9;i++){
            t.push_back(i);
            helper(k,n-i,ans,t,i+1);
            t.pop_back();
        }
       
}  
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> t;
        helper(k,n,ans,t,1);
        return ans;
    }
};