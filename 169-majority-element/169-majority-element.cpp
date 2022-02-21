class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=1, n= nums.size(),res=0;
        for(int i=1;i<n;i++){
            if(nums[i] == nums[res]) count++;
            else count--;
            if(count==0){
                res=i;
                count=1;
            }
        }
        count=0;
        for(int i=0;i<n;i++){
            if(nums[res]==nums[i]) count++;
        }
        if(count>n/2) return nums[res];
        return -1;
        
    }
};