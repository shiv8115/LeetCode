class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size(), count=1, res=0;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[res]) count++;
            else{
                count--;
                if(count==0) {
                    count=1;
                    res=i;
                }
            }
        }
        count=0;
        for(int i=0;i<n;i++){
            if(nums[i]==nums[res]) count++;
        }
        if(count>n/2) return nums[res];
        return -1;
    }
};