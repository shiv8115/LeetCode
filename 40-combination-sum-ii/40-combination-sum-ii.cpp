class Solution {
public:
    void helper(int idx,vector<int>&nums,int target, int sum, vector<int>v, set<vector<int>>&s){
        if(sum==target){
             s.insert(v);
             return;
        }
        if(sum>target || idx== nums.size()) return;
        //Pick
        sum+=nums[idx];
        v.push_back(nums[idx]);
        helper(idx+1,nums,target,sum,v,s);
        v.pop_back();
        sum-= nums[idx];
        
        while(idx+1< nums.size() && nums[idx]==nums[idx+1]) idx++;
        
        // Not Pick
        helper(idx+1,nums,target,sum,v,s);
    }
 
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int>v;
        set<vector<int>>s;
        helper(0,candidates,target,0,v,s);
        vector<vector<int>>res(s.begin(),s.end());
        return res;
    }
};