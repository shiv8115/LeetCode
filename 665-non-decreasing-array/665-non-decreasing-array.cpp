class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
         int count = 0, tmp = INT_MIN;
        for(int i = 0; i < nums.size()-1; i++){
            if(nums[i] <= nums[i+1]){
                tmp = nums[i];
            }
            else{
                if(nums[i+1] < tmp)nums[i+1] = nums[i];
                count++;
                if(count > 1)return false;
            }
        }
        return true;
    }
};