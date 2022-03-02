class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0,pre_sum=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            pre_sum+=nums[i];
            if(pre_sum==k) count++;
            if(mp.find(pre_sum- k)!=mp.end()) count+=mp[pre_sum-k];
            mp[pre_sum]++;
        }
        return count;
        
    }
};