class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>mp;
        int count=0;
        int presum=0;
        for(int i=0;i<nums.size();i++){
            presum+=nums[i];
            if(presum==goal) count++;
            if(mp.find(presum-goal)!=mp.end()){
                count+=mp[presum-goal];
            }
            mp[presum]++;
        }
        return count;
    }
};