class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n1=INT_MAX, n2=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            if(x<=n1) n1=x;
            else if(x<=n2) n2=x;
            else return true;
        }
        return false;
        
    }
};