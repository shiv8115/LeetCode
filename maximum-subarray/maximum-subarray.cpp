class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr_sum=nums[0],osum=nums[0];
        for(int i=1;i<nums.size();i++){
            if(curr_sum>=0){
                curr_sum+=nums[i];
                
            }
            else 
              curr_sum=nums[i];
            osum=max(osum,curr_sum);
        }
        return osum;
        
    }
};