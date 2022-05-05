class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int presum=0,count=0;
        for(int i=0;i<nums.size();i++){
            presum+=nums[i];
            if(presum%k==0) count++;
            int rem= presum%k;
            if(rem<0) rem= rem+k;
            
            if(mp.find(rem)!=mp.end()){
                count+=mp[rem];
                //mp[rem]++;
            }
                mp[rem]++;
        }
        return count;
    }
};