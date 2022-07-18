class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n= nums.size();
        vector<int>dp;
        for(int i=0;i<n;i++){
            int x=nums[i];
            auto it= lower_bound(dp.begin(), dp.end(),x);
            if(it==dp.end()) dp.push_back(x);
            else *it=x;
        }
        return dp.size();
    }
};