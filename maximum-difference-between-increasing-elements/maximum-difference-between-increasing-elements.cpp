class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int ans=0;
        int curr= INT_MAX;
        for(int i=0;i<nums.size();i++){
            curr=min(curr,nums[i]);
            ans=max(ans,nums[i]-curr);
        }
        if(ans==0) return -1;
        return ans;
    }
};