class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        int low=0, high=n-1;
        while(low<=high){
            int mid= low+(high-low)/2;
            if(mid==0 || mid==n-1){
                if(mid==0) {
                    if(nums[mid]!=nums[mid+1]) return nums[mid];
                }
                else if(mid==n-1) {
                    if(nums[mid]!=nums[mid-1]) return nums[mid];
                }
                
            }
            else{
                if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]) 
                    return nums[mid];
            }
            if(mid%2==0){
                if(nums[mid-1]==nums[mid]) high=mid-1;
                else low=mid+1;
            }
            else if(mid%2!=0){
                if(nums[mid-1]==nums[mid]) low=mid+1;
                else high=mid-1;
    
            }
            
        }
        return -1;
        
    }
};