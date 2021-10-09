class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
       int n=nums.size();
        int k=0;
        for(int i=0;i<n;i++){
            nums.push_back(nums[k++]);
        }
        return nums;
        
    }
};