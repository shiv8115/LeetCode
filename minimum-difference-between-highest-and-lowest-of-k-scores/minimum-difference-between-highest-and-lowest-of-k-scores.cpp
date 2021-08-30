class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int res=INT_MAX;
        int n=nums.size();
        if(k>n) return -1;
        for(int i=0;i<=n-k;i++){
            int l=nums[i];
            int r=nums[i+k-1];
            res=min(res,r-l);
        }
        return res;
        
    }
};