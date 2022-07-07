class Solution {
public:
    long long solve(int idx, vector<int>&nums,int p,vector<vector<long long>>&dp ){
        if(idx>=nums.size()) return 0;
        if(dp[idx][p] !=- 1) return dp[idx][p];
        long long ans;
        long long ele= (long long)(nums[idx]);
        //Taking this idx element
        if(p==0) {
            // means even index
            ans=solve(idx+1,nums,1,dp)+ele;
        }
        else ans= solve(idx+1,nums,0,dp)-ele;
        
        // not taking this element
        ans= max(ans, solve(idx+1,nums,p,dp));
        return dp[idx][p]=ans;
    }
    long long maxAlternatingSum(vector<int>& nums) {
        int n= nums.size();
        vector<vector<long long>>dp(n,vector<long long >(2,-1));
        return solve(0,nums,0,dp);
    }
};