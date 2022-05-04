class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n=nums.size(),ans=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            int c= (k-nums[i]);
            if(mp[c]>0){
                ans++;
                mp[c]--;
            }
            else mp[nums[i]]++;
        }
        return ans;
    }
};