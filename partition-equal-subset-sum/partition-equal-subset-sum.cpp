class Solution {
public:
    bool is_subset(vector<int>&nums,int n,int sum){
       // int n=nums.size();
        bool t[n+1][sum+1];
        for(int i=0;i<=sum;i++) t[0][i]=false;
        for(int j=0;j<=n;j++) t[j][0]=true;
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
                if(nums[i-1]<=j)
                    t[i][j]=(t[i-1][j-nums[i-1]] || t[i-1][j]);
                else
                    t[i][j]= t[i-1][j];
            }
        }
        return t[n][sum];
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++) sum+=nums[i];
        if(sum%2!=0) return false;
        else return is_subset(nums,n,sum/2);
        
    }
};