class Solution {
public:
    int jump(vector<int>& nums) {
        int n= nums.size();
        vector<int>dp(n);
        dp[n-1]=0;
        for(int i=n-2;i>=0;i--){
            int minm=INT_MAX;
            if(nums[i]!=0){
            
            for(int j=1;j<=nums[i] && i+j< n; j++){
                if(nums[i]!=0){
                    if(dp[i+j]<minm) minm=dp[i+j];
                }
            }
            }
                
            if(minm==INT_MAX) dp[i]=INT_MAX;
            else dp[i]= minm+1;
        }
        return dp[0];
    }
};