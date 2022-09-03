class Solution {
public:
    bool isOk(vector<int>&nums, int threshold, int mid){
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=0){
                sum+=1;
            }
            else{
                sum+=(nums[i]/mid);
                if(nums[i]%mid) sum+=1;
            }
        }
        return sum<=threshold;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1, high=INT_MAX;
        int ans=0;
        while(low<=high){
            int mid= low+(high-low)/2;
            if(isOk(nums,threshold,mid)){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};