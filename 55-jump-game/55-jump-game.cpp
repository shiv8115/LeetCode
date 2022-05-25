class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n= nums.size();
        int x= nums[0];
        for(int i=1;i<n;i++){
            if(x<1) return false;
            if(nums[i]>=x) x= nums[i];
            else x--;
        }
        return true;
    }
};