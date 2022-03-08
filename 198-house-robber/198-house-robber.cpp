class Solution {
public:
    int rob(vector<int>& nums) {
        int inc= nums[0], exc=0;
        for(int i=1;i<nums.size();i++){
            int ninc= exc+nums[i];
            int nexc= max(exc, inc);
            inc= ninc;
            exc=nexc;
        }
        return max(inc, exc);
    }
};