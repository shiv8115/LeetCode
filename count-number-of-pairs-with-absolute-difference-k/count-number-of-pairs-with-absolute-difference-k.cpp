class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n=nums.size(),count=0;
        for(int i=0;i<n;i++){
            if(mp.count(nums[i]-k) || mp.count(nums[i]+k)){
                if(mp.count(nums[i]-k)) count+= mp[nums[i]-k];
                if(mp.count(nums[i]+k)) count+=mp[nums[i]+k];
            }
            mp[nums[i]]++;
        }
        return count;
    }
};