class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        int idx,maxe=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]>maxe){
                maxe=nums[i];
                idx=i;
            }
        }
        for(int i=0;i<n;i++){
            if(i==idx) continue;
            if(2*nums[i]>maxe) return -1;
        }
        return idx;
    }
};