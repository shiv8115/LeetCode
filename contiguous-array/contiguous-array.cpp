class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++) nums[i]=nums[i]==0?-1:1;
        unordered_map<int,int>mp;
        int sum=0,maxlen=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum==0) maxlen=i+1;
            if(mp.find(sum+n)!=mp.end()){
                if(maxlen< i-mp[sum+n]) maxlen=i-mp[sum+n];
            }else mp[sum+n]=i;
        }
        return maxlen;
        
    }
};