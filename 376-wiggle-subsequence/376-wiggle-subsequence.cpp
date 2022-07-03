class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int n= nums.size();
        if(n<=1) return n;
        int d=1,u=1;
        for(int i=0;i<n-1;i++){
            if(nums[i]<nums[i+1]) u=d+1;
            if(nums[i]>nums[i+1]) d=u+1;
        }
        return max(d,u);
    }
};