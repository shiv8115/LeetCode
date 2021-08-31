class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        int low=0,high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[low]<nums[high]) return nums[low];
            int next=(mid+1)%n;
            int prev=(mid-1+n)%n;
            if(nums[mid]<nums[next] && nums[mid]<nums[prev])
                return nums[mid];
            else if(nums[low]<=nums[mid]) low=mid+1;
            else if(nums[mid]<=nums[high]) high=mid-1;
        }
        return 0;
        
    }
};