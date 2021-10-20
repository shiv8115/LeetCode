class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        //if(nums.size()==1 && nums[0]==1) return 2;
        for(int i=0;i<nums.size();i++){
            while(nums[i]>0 and nums[i]< nums.size() and nums[i]!=nums[nums[i]-1])
                swap(nums[i],nums[nums[i]-1]);
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i+1) return i+1;
        }
        return nums.size()+1;
        
    }
};