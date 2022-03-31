class Solution {
public:
    bool isValid(vector<int>&arr, int k, int m){
        int sum=0;
        int count=1;
        for(int i=0;i<arr.size();i++){
            sum+= arr[i];
            if(sum>k) {
                count++;
                sum=arr[i];
            }
        }
        return (count<=m);
    }
    int splitArray(vector<int>& nums, int m) {
        int ans=0;
        int n= nums.size();
        int low=0, high=0;
        for(auto &x: nums){
            low= max(low, x);
            high+= x;
        }
        while(low<=high){
            int mid= low+(high-low)/2;
            if(isValid(nums,mid,m)) {
                ans= mid;
                high=mid-1;
            }else low= mid+1;
        }
          return ans;
        
    }
};