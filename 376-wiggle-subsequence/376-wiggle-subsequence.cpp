class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int n= nums.size();
        // if(n<=1) return n;
        // int d=1,u=1;
        // for(int i=0;i<n-1;i++){
        //     if(nums[i]<nums[i+1]) u=d+1;
        //     if(nums[i]>nums[i+1]) d=u+1;
        // }
        // return max(d,u);
        int ans=1;
        int prev=0;
        for(int i=0;i<n-1;i++){
            int diff= nums[i+1]-nums[i];
            if((diff>0 && prev<=0) || (diff<0 && prev>=0)){
                ans++;
                prev=diff;
            }
        }
        return ans;
    }
};