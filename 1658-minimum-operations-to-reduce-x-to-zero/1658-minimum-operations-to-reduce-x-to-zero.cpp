class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
         int n= nums.size();
        int l=0,r=0, ans=-1, sum=0;
        for(int i=0;i<n;i++) sum+=nums[i];
        int curr= nums[0];
        while(l<n && r<n){
            if(curr< sum-x){
                r++;
                if(r==n) break;
                curr+= nums[r];
            }
            if(curr> sum-x){
                curr-= nums[l];
                l++;
            }
            if(curr==sum-x){
                ans= max(ans, r-l+1);
                r++;
                if(r==n) break;
                curr+= nums[r];
            }
        }
        return ans==-1? -1 : n-ans;
    }
};