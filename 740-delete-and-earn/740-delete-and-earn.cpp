class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int inc=0, exc=0;
        vector<int>count(10001,0);
        for(int i=0;i<nums.size();i++) count[nums[i]]++;
        for(int i=0;i<=10000;i++){
            int ni =   exc + count[i]*i;
            int ne= max(exc, inc);
            exc= ne;
            inc= ni;
        }
       return max(exc, inc); 
        
    }
};