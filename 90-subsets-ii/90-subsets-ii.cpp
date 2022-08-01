class Solution {
public:
  
    
    void solve(vector<int>&nums,int idx, vector<int>v,set<vector<int>>&s){
        if(idx==nums.size()){
                sort(v.begin(), v.end());
                s.insert(v);
                return;
        }
        
        //pick
        v.push_back(nums[idx]);
        solve(nums,idx+1,v,s);
        v.pop_back();
        
        // Not Pick
        solve(nums,idx+1,v,s);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>v;
        set<vector<int>>s;
        solve(nums,0,v,s);
        vector<vector<int>>res(s.begin(),s.end());
        return res;
        
    }
};