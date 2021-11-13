class Solution {
public:
    int count_subset(vector<int>&nums,int n, int sum){
        int t[n+1][sum+1];
        for(int i=0;i<=sum;i++) t[0][i]=0;
        for(int i=0;i<=n;i++) t[i][0]=1;
        for(int i=1;i<=n;i++){
            for(int j=0;j<=sum;j++){
                if(nums[i-1]<=j)
                    t[i][j]= t[i-1][j-nums[i-1]]+t[i-1][j];
                else
                    t[i][j]=t[i-1][j];
            }
        }
        return t[n][sum];
        
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=0,n=nums.size();
        target=abs(target);
        for(int i=0;i<nums.size();i++) sum+=nums[i];
        if(sum< target || ((sum+target)%2!=0)) return 0;
        return count_subset(nums,n,(target+sum)/2);
        
    }
};