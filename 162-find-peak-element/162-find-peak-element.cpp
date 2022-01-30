class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 0;
        int low=0,high=n-1;
        while(low<=high){
            int mid= low+(high-low)/2;
            if(mid>0 && mid<n-1){
                if(nums[mid] > nums[mid-1] && nums[mid]>nums[mid+1]) return mid;
                else if(nums[mid-1]>nums[mid]) high=mid-1;
                else low=mid+1;
            }
            if(mid==0){
                int ans= nums[0]>nums[1]?0:1;
                return ans;
            }
            if(mid==n-1){
                int ans= nums[n-1]>nums[n-2]?n-1:n-2;
                return ans;
            }
        }
        return -1;
    }
};