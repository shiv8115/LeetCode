class Solution {
public:
    void solve(vector<int>&nums, int idx, vector<int>ds, vector<vector<int>>& ans){
        if(idx==nums.size()){
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[idx]);
        solve(nums,idx+1,ds,ans);
        ds.pop_back();
        
        solve(nums,idx+1,ds,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>ds;
        solve(nums,0,ds,ans);
        return ans;
    }
};