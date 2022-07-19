class Solution {
public:
    int minOperations(vector<int>& nums) {
        if(nums.size()==1) return 0;
        int res=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]) continue;
            else{
                int temp= nums[i];
                nums[i]= nums[i-1]+1;
                res+= nums[i]-temp;
            }
        }
        return res;
    }
};