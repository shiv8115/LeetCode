class Solution {
public:
    bool PredictTheWinner(vector<int>& nums) {
        int n= nums.size();
        int dp[n][n];
        for(int g=0;g<n;g++){
            for(int i=0, j=g; j<n; i++,j++){
                if(g==0) dp[i][j]= nums[i];
                else if(g==1) dp[i][j]= max(nums[i],nums[j]);
                else{
                    int val1= nums[i]+ min(dp[i+1][j-1], dp[i+2][j]);
                    int val2= nums[j]+ min(dp[i+1][j-1], dp[i][j-2]);
                    dp[i][j]= max(val1,val2);
                }
            }
        }
        int mp= dp[0][n-1];
        int op=0;
        for(auto &x:nums) op+=x;
        
        return (mp>=op-mp);
    }
};