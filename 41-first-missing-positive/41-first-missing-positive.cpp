class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n= nums.size();
        for(int i=0;i<n;i++)
            if(nums[i]<0 || nums[i]>n) nums[i]=0;
        int i=0;
        while(i<n){
            if(nums[i]!=i+1 && nums[i]!=0 && nums[i]!=nums[nums[i]-1])
                swap(nums[i],nums[nums[i]-1]);
            else i++;
        }
        int ans=-1;
        for(int i=0;i<n;i++)
            if(nums[i]!=i+1)
            {
                ans=i+1;
                break;
            }
        if(ans==-1) ans= n+1;
        return ans;
    }
};