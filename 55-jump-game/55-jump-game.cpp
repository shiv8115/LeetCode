class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n= nums.size(),i;
        int maxm=0;
        for( i=0;i<n && i<=maxm ; i++)
            maxm= max(nums[i]+i, maxm);
        return i==n;
    }
};