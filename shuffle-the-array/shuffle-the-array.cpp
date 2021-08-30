class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        vector<int>v;
        int j=n;
        int i=0;
        
        for(int k=0;k<n;k++){
            
            v.push_back(nums[i++]);
            v.push_back(nums[j++]);
        }
        
        return v;
        
    }
};